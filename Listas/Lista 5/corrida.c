#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[50];
    int preco;
    int potencia;
} Peca;

int main()
{
    int qtd, money, i, j, k, cont = 0, rendimento = 0, valorT = 0, linha = 0, record = 0, posr = 0, matriz[50][3], dinheiros[50];

    scanf("%d %d", &money, &qtd);

    Peca pecas[qtd];
    for (i = 0; i < qtd; i++)
    {
        scanf("%s %d %d", pecas[i].nome, &pecas[i].preco, &pecas[i].potencia);
    }
    for (i = 0; i < qtd; i++)
    {
        if (strcmp(pecas[i].nome, "Motor") == 0)
        {
            for (j = 0; j < qtd; j++)
            {
                if (strcmp(pecas[j].nome, "Roda") == 0)
                {
                    for (k = 0; k < qtd; k++)
                    {
                        if (strcmp(pecas[k].nome, "Lataria") == 0)
                        {
                            if (pecas[i].preco + pecas[j].preco + pecas[k].preco <= money)
                            {
                                matriz[linha][0] = pecas[i].potencia;
                                matriz[linha][1] = pecas[j].potencia;
                                matriz[linha][2] = pecas[k].potencia;
                                dinheiros[linha] = pecas[i].preco + pecas[j].preco + pecas[k].preco;
                                linha++;
                            }
                        }
                    }
                }
            }
        }
    }
    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < 3; j++)
        {
            rendimento += matriz[i][j];
        }
        if (rendimento > record)
        {
            record = rendimento;
            posr = i;
        }
        rendimento = 0;
    }
    if (linha < 1 || qtd < 3)
    {
        printf("Nao foi possivel construir uma caranga...\n");
    }
    else
    {
        printf("Minha nave tem uma performance de %d pontos\n", record);
        printf("E ainda me sobraram %d mangos!\n", money - dinheiros[posr]);
    }

    return 0;
}
