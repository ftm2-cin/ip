#include <stdio.h>

int main(void)
{
    int vetorX[5];
    int cache = 0;
    for (int a = 0; a < 5; a++)
    {
        scanf("%d", &vetorX[a]);
    }
    for (int a = 0; a < 5; a++)
    {

        for (int b = 0; b < 5; b++)
        {

            if (vetorX[b - 1] > vetorX[b])
            {
                cache = vetorX[b];
                vetorX[b] = vetorX[b - 1];
                vetorX[b - 1] = cache;
            }
        }
    }
    for (int a = 0; a < 5; a++)
    {
        printf("%d ", vetorX[a]);
    }
    return 0;
}