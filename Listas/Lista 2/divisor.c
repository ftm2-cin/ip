#include <stdio.h>

int main()
{
    int numeroi, numerof = 0, vezes = 0, cont = 0, i, numfrequente;
    scanf("%d", &numerof);

    for (i = 2; i <= numerof; i++)
    {
        numeroi = numerof;
        while (numerof % i == 0)
        {
            numerof = numerof / i;
            cont++;
            if (cont > vezes)
            {
                numfrequente = i;
                vezes = cont;
            }
            else if ((cont == vezes) && (i < (numfrequente + 1)))
            {
                numfrequente = i;
                vezes = cont;
            }
        }
        cont = 0;
        numerof = numeroi;
    }
    printf("mostFrequent: %d, frequency: %d", numfrequente, vezes);
}