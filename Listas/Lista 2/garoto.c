#include <stdio.h>

int main()
{
    int n, i, cont = 0, num, soma = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        scanf("%d", &num);
        cont = 0;
        for (i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                cont++;
            }
        }
        if (cont > 2 || num % 2 == 0)
        {
            soma = soma + num;
        }
        else if (cont <= 2 && num % 2 == 1)
        {
            soma = soma - num;
        }
        n--;
    }
    if (soma >= 0)
    {
        printf("Ele ainda tem %d dias de vida\n", soma);
    }
    else
    {
        printf("Foi de base\n");
    }
}