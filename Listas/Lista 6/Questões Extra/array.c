#include <stdio.h>
#include <stdlib.h>

int Menor(int *array)
{
    int menor = array[0];
    for (int i = 0; i < 6; i++)
    {
        if (array[i] < menor)
        {
            menor = array[i];
        }
    }
    return menor;
}

int Maior(int *array)
{
    int maior = array[0];
    for (int i = 0; i < 6; i++)
    {
        if (array[i] > maior)
        {
            maior = array[i];
        }
    }
    return maior;
}

int main()
{
    int array[6];
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("%d\n", Menor(array));
    printf("%d\n", Maior(array));
    return 0;
}
