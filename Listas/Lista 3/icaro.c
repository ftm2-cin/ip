#include <stdio.h>

int main()
{
    int vetorX[20], cont = 0, num;
    int cache = 0;
    for (int i = 0; i < 3; i++)
    {
        cont = 0;
        for (int a = 0; a < 20; a++)
        {
            scanf("%d", &num);
            vetorX[a] = num;
            cont++;
            if (num == 420)
            {
                break;
            }
        }
        for (int a = 0; a < cont; a++)
        {

            for (int b = 1; b < cont; b++)
            {

                if (vetorX[b - 1] > vetorX[b])
                {
                    cache = vetorX[b];
                    vetorX[b] = vetorX[b - 1];
                    vetorX[b - 1] = cache;
                }
            }
        }
        printf("%d\n", cont);
        for (int a = 0; a < cont; a++)
        {
            printf("%d ", vetorX[a]);
        }
        printf("\n");
    }
}