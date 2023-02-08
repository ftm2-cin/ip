#include <stdio.h>

int main()
{
    int loop = 0, qtd = 0, elem = 0, cache1 = 0, cache2 = 0, dife = 0, max1 = 0, px = 0, pxmax = 0;
    int vetorP[99];

    scanf("%d", &loop);
    for (int x = 0; x < loop; x++)
    {
        scanf("%d", &qtd);
        for (int a = 0; a < qtd; a++)
        {
            scanf("%d", &vetorP[a]);
        }
        vetorP[qtd]=100000;
        for (int a = 0; a < qtd; a++)
        {
            cache1 = vetorP[a];
            cache2 = vetorP[a + 1];
            if ((cache1 > cache2) && (a < (qtd - 1)))
            {
                if (elem == 0)
                {
                    px = a;
                }
                elem++;
            }
            else if (cache1 < cache2)
            {
                if (elem > max1)
                {
                    max1 = elem;
                    pxmax = px;
                }
                elem = 0;
            }
        }
        if (max1 != 0)
        {
            max1++;
        }
        printf("%d\n", max1);
        if (max1 != 0)
        {
            for (int i = pxmax; i < (max1 + pxmax); i++)
            {
                printf("%d ", vetorP[i]);
                if (i == (max1 + pxmax - 1))
                {
                    printf("\n");
                }
            }
        }
        elem = 0;
        pxmax = 0;
        px = 0;
        max1 = 0;
    }
}