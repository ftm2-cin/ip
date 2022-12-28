#include <stdio.h>

int main()
{
    int x1 = 0, y1 = 0, i, j, m, n, k, cont = 0;
    char x;
    scanf("%d%c%d", &x1, &x, &y1);
    if (y1 % 2 == 1)
    {
        if (x1 % 2 == 0)
        {
            for (m = 0; m < (x1 - 2) / 2; m++)
            {
                for (i = 0; i < y1; i++)
                {
                    printf("= ");
                    if (i == y1 - 1)
                    {
                        printf("\n");
                    }
                }
                for (j = 0; j <= (y1 - 1) / 2; j++)
                {
                    if (j == (y1 - 1) / 2)
                    {
                        printf("= \n");
                    }
                    else
                        printf("= o ");
                }
                if (m == (x1 / 2) - 2)
                {
                    while (cont != 2)
                    {
                        for (n = 0; n < y1; n++)
                        {
                            if (n == (y1 - 1) / 2)
                            {
                                printf("H ");
                            }
                            else
                                printf("= ");

                            if (n == y1 - 1)
                            {
                                printf("\n");
                            }
                        }
                        cont++;
                        if (cont == 2)
                        {
                            for (k = 0; k < (y1 * 2) - 1; k++)
                            {
                                printf("-");
                            }
                        }
                    }
                }
            }
        }
        else if (x1 % 2 == 1)
        {
            for (m = 0; m < ((x1 - 1) / 2) - 1; m++)
            {
                for (i = 0; i < y1; i++)
                {
                    printf("= ");
                    if (i == y1 - 1)
                    {
                        printf("\n");
                    }
                }
                for (j = 0; j <= (y1 - 1) / 2; j++)
                {
                    if (j == (y1 - 1) / 2)
                    {
                        printf("= \n");
                    }
                    else
                        printf("= o ");
                }
                if (m == (x1 / 2) - 2)
                {
                    while (cont != 2)
                    {
                        for (n = 0; n < y1; n++)
                        {
                            if (n == (y1 - 1) / 2)
                            {
                                printf("H ");
                            }
                            else
                                printf("= ");

                            if (n == y1 - 1)
                            {
                                printf("\n");
                            }
                        }
                        cont++;
                        if (cont == 2)
                        {
                            for (k = 0; k < (y1 * 2) - 1; k++)
                            {
                                printf("-");
                            }
                        }
                    }
                }
            }
        }
    }
    else
        printf("Nao posso construir nessas proporcoes");
}