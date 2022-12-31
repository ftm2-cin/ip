#include <stdio.h>

int main()
{
    int num, numatual, numeroa, linha, i, j, k, cont1 = 1, cont2 = 0;
    char letra;
    scanf(" %c", &letra);
    num = (int)letra - 64;
    linha = (num * 2) - 1;
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= linha; j++)
        {
            if (j >= num - (i - 1) && j <= num + (i - 1))
            {
                if (j <= (linha - 1) / 2 + 1)
                {
                    for (k = 1; k < cont1; k++)
                    {
                        cont2++;
                    }
                    printf("%c", 65 + cont2);
                    numeroa = 66 + cont2;
                    cont1++;
                    cont2 = 0;
                }
                else
                {
                    cont2--;
                    printf("%c", numeroa + cont2 - 1);
                    numeroa = numeroa + cont2;
                    cont1++;
                    cont2 = 0;
                }
            }
            else
            {
                printf(".");
                cont1 = 1;
            }
        }
        printf("\n");
    }
}