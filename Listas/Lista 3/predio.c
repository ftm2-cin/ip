#include <stdio.h>

int main (void)
{
    int qtd, contb = 0, contm = 0, conta = 0, dife = 0, cache = 0, dist = 0;
    scanf("%d", &qtd);
    int vetorP[qtd];
    for (int i = 0; i < qtd; i++)
    {
        scanf("%d", &vetorP[i]);
        cache = vetorP[i];
        if (cache < 50)
        {
            contb++;
        }else if (cache >= 50 && cache < 100)
        {
            contm++;
        }else
            conta++;
    }
    for (int a = 0; a < qtd; a++)
    {

        for (int b = 0; b < qtd; b++)
        {

            if (vetorP[b] > vetorP[b - 1])
            {
                cache = vetorP[b];
                vetorP[b] = vetorP[b - 1];
                vetorP[b - 1] = cache;
            }
        }
    }
    dife = vetorP[0] - vetorP[qtd - 1];
    for (int i = 0; i < qtd; i++)
    {
        cache = vetorP[i];
        if (cache != vetorP[i + 1])
        {
            dist++;
        }
    }
    printf("%d\n", dist);
    printf("%d\n", conta);
    printf("%d\n", contm);
    printf("%d\n", contb);
    printf("%d\n", dife);
}