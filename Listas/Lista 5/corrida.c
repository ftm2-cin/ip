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
    int qtd, money, i, j;
    scanf("%d %d", &money, &qtd);
    Peca pecas[qtd];

    for (i = 0; i < qtd; i++)
    {
        fflush(stdin);
        scanf("%s %d %d", pecas[i].nome, &pecas[i].preco, &pecas[i].potencia);
    }

    return 0;
}