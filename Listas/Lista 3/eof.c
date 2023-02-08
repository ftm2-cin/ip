#include <stdio.h>

int main()
{
    int vetor[100], i = 0, j, cache, cont = 0;
    // SCAN DO VETOR
    while (scanf("%d", &vetor[i]) != EOF)
    {
        i++;
    }
    // SORT
    for (int a = 0; a < i; a++)
    {

        for (int b = 1; b < i; b++)
        {

            if (vetor[b - 1] > vetor[b])
            {
                cache = vetor[b];
                vetor[b] = vetor[b - 1];
                vetor[b - 1] = cache;
            }
        }
    }
    // VERIFICAÇÃO DE IMPAR
    for (int j = 0; j < i; j++)
    {
        cont = 0;
        for (int z = 0; z < j + 2; z++)
        {
            if (vetor[j] == vetor[z])
            {
                cont++;
            }
        }

        if (cont < 2 || cont == 3)
        {
            for (int z = 0; z < i; z++)
            {
                printf("%d ", vetor[z]);
            }
            printf("\n%d", vetor[j]);
            cache = 0;
        }
    }
    if (cache == 1)
    {
        for (j = 0; j < i; j++)
        {
            printf("%d ", vetor[j]);
        }
        printf("\n0");
    }
}