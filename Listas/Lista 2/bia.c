#include <stdio.h>

int main()
{
    int qtd, soma = 0, num, i, j, somaj = 1, somaj2, cont = 0;
    scanf("%d", &qtd);
    for (i = 0; i < qtd; i++)
    {
        scanf("%d", &num);
        soma = soma + num;
    }
    for (j = 1; soma >= somaj && somaj * (j + 1) <= soma; j++)
    {

        somaj = somaj * (j + 1);
        cont++;
    }
    somaj2 = somaj * (j + 1);
    if (somaj2 - soma < soma - somaj)
    {
        printf("Bia arrecadou %d! dinheiros e pode jogar tenis!\n", cont + 2);
    }
    else if (qtd == 0 || soma <= 1)
    {
        printf("Bia arrecadou %d! dinheiros e pode jogar tenis!\n", cont);
    }
    else
    {
        printf("Bia arrecadou %d! dinheiros e pode jogar tenis!\n", cont + 1);
        return 0;
    }
}