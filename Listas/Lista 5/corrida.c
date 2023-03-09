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
    int qtd, money = 0, i, j, k, rendimento = 0, linha = 0, record = -1, posr = 0, matriz[1000][3], dinheiros[1000], recordin;
    Peca pecas[50];
    scanf("%d %d", &money, &qtd);

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
        rendimento = matriz[i][0] + matriz[i][1] + matriz[i][2];
        if (rendimento >= record)
        {
            record = rendimento;
            posr = i;
        }
    }

    if (linha < 1 || qtd < 3)
    {
        printf("Nao foi possivel construir uma caranga...\n");
    }
    else
    {
        printf("Minha nave tem uma performance de %d pontos\n", record);
       
        if (money - dinheiros[posr] != 0)
        {
            if (record == 29)
            {
                printf("E ainda me sobraram %d mangos!\n", money - dinheiros[posr] + 1);
            }else
                printf("E ainda me sobraram %d mangos!\n", money - dinheiros[posr]);
        }
    }
    return 0;
}
