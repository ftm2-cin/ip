#include <stdio.h>
#define TAM 5
int main()
{
    float vet[TAM] = {10, 9, -100, -2, 7};
    int i, j, tmp;
    int iMin = j;
    for (j = 0; j < TAM; j++)
    {
        iMin = j;
        for (i = j + 1; i < TAM; i++)
        {
            if (vet[i] < vet[iMin])
            {
                iMin = i;
            }
        }
        if (iMin != j)
        {
            tmp = vet[j];
            vet[j] = vet[iMin];
            vet[iMin]= tmp;
        }
    }
    printf("Menor elemento eh v[%d]=%.2f\n", iMin, vet[iMin]);
    return 0;
}