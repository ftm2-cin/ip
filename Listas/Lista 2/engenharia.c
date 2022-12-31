#include <stdio.h>

int main()
{
    int x, y, i, j, k, contalve = 0, contjan = 0, contali = 0, soma = 0;
    scanf("%dx%d", &x, &y);
    if (y % 2 == 1)
    {
        for (i = 1; i <= x; i++)
        {
            if (i > x - 2)
            {
                for (j = 1; j <= y; j++)
                {
                    if (j == (((y - 1) / 2) + 1))
                    {
                        printf("H ");
                    }
                    else
                    {
                        printf("= ");
                        contalve++;
                    }
                }
                if (i > x - 1)
                {
                    printf("\n");
                    for (k = 0; k < (y * 2) - 1; k++)
                    {
                        printf("-");
                        contali++;
                    }
                }
            }
            else if (i % 2 == 0)
            {
                for (j = 1; j <= y; j++)
                {
                    if (j % 2 != 0)
                    {
                        printf("= ");
                        contalve++;
                    }
                    else
                    {
                        printf("o ");
                        contjan++;
                    }
                }
            }
            else if (i % 2 != 0)
            {
                for (j = 1; j <= y; j++)
                {
                    printf("= ");
                    contalve++;
                }
            }
            printf("\n");
        }
        soma = 500 + contalve * 85 + contjan * 250 + contali * 133;
        printf("\n");
        printf("E o valor total eh %d", soma);
    }
    else
        printf("Nao posso construir nessas proporcoes\n");
}