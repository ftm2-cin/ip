#include <stdio.h>

void possibilidades(int *qtd, int *distancia)
{
    int dado = 6;
    int vezes = 0;
    if (dado * (*qtd) >= distancia)
    {
        vezes++;
        dado--;
    }else
    {
        dado--;
        possibilidades(*qtd, *distancia);
    }
    

    distancia--;
}
int main()
{
    int *qtd, *distancia;
    scanf("%d %d", &qtd, &distancia);
    possibilidades(&qtd, &distancia);
}