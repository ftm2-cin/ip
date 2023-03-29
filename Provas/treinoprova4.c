#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char timeC[50], timeF[50];
    int golsC, golsF;
} Partida;

typedef struct
{
    char time[50];
    int pontos, pj;
} Tabela;

void carregaPartidas(Partida **partidas, int *qtdPartidas, FILE *arquivo)
{
    char linha[100];
    while (fgets(linha, 100, arquivo) != NULL)
    {
        Partida *temp = (Partida *)realloc(*partidas, (*qtdPartidas + 1) * sizeof(Partida));
        if (temp == NULL)
        {
            printf("Erro ao alocar memoria\n");
            break;
        }
        *partidas = temp;
        sscanf(linha, "%s %d X %d %s", (*partidas)[*qtdPartidas].timeC, &(*partidas)[*qtdPartidas].golsC, &(*partidas)[*qtdPartidas].golsF, (*partidas)[*qtdPartidas].timeF);
        (*qtdPartidas)++;
    }
}

void geraTabela(int qtdpartidas, Partida *partidas)
{
    Tabela tabela[20];
    int i, j, numTimes = 0;

    for (i = 0; i < qtdpartidas; i++)
    {
        int encontradoC = 0, encontradoF = 0;
        for (j = 0; j < numTimes; j++)
        {
            if (strcmp(partidas[i].timeC, tabela[j].time) == 0)
            {
                encontradoC = 1;
            }
            if (strcmp(partidas[i].timeF, tabela[j].time) == 0)
            {
                encontradoF = 1;
            }
        }
        if (!encontradoC)
        {
            strcpy(tabela[numTimes].time, partidas[i].timeC);
            tabela[numTimes].pontos = 0;
            tabela[numTimes].pj = 0;
            numTimes++;
        }
        if (!encontradoF)
        {
            strcpy(tabela[numTimes].time, partidas[i].timeF);
            tabela[numTimes].pontos = 0;
            tabela[numTimes].pj = 0;
            numTimes++;
        }
    }

    for (i = 0; i < qtdpartidas; i++)
    {
        int indexC = -1, indexF = -1;
        for (j = 0; j < numTimes; j++)
        {
            if (strcmp(partidas[i].timeC, tabela[j].time) == 0)
            {
                indexC = j;
            }
            if (strcmp(partidas[i].timeF, tabela[j].time) == 0)
            {
                indexF = j;
            }
        }
        tabela[indexC].pj++;
        tabela[indexF].pj++;
        if (partidas[i].golsC > partidas[i].golsF)
        {
            tabela[indexC].pontos += 3;
        }
        else if (partidas[i].golsF > partidas[i].golsC)
        {
            tabela[indexF].pontos += 3;
        }
        else
        {
            tabela[indexC].pontos += 1;
            tabela[indexF].pontos += 1;
        }
    }

    for (i = 0; i < numTimes - 1; i++)
    {
        for (j = i + 1; j < numTimes; j++)
        {
            if (tabela[i].pontos < tabela[j].pontos)
            {
                Tabela temp = tabela[i];
                tabela[i] = tabela[j];
                tabela[j] = temp;
            }
        }
    }
    printf("Posição  Time  Pontos  PJ\n");
    for (i = 0; i < numTimes; i++)
    {
        printf("%d. %s %d %d\n", i + 1, tabela[i].time, tabela[i].pontos, tabela[i].pj);
    }
}

int main()
{
    FILE *arquivo = NULL;
    Partida *partidas = NULL;
    int qtdPartidas = 0;
    int opcao = 0;
    while (opcao != 3)
    {
        printf("= = = = MENU = = = =\n");
        printf("1. Carregar Partidas\n2. Gerar tabela\n3. Sair do Programa\n");
        scanf("%d", &opcao);
        if (opcao == 1)
        {
            arquivo = fopen("jogos.txt", "r");
            if (arquivo == NULL)
            {
                printf("Erro ao abrir o arquivo\n");
                exit(1);
            }
            carregaPartidas(&partidas, &qtdPartidas, arquivo);
            printf("%s\n", partidas[0].timeC);
            fclose(arquivo);
        }
        else if (opcao == 2)
        {
            geraTabela(qtdPartidas, partidas);
        }
    }
    free(partidas);
    return 0;
}