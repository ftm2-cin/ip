#include <stdio.h>

int main()
{
    int x, des = 0, i, cache = 0;
    scanf("%d", &x);
    char vetorC[x];
    for (i = 0; i < x + 1; i++)
    {
        scanf("%c ", &vetorC[i]);
    }
    scanf("%d", &des);
    for (i = 1; i < x + 1; i++)
    {
        cache = vetorC[i];
        if ((int)cache + (int)des <= 127)
        {
            vetorC[i] = cache + des;
        }else
        {
            vetorC[i] = (cache - 26) + des;
        }
    }
    for (i = 1; i < x + 1; i++)
    {
        if (vetorC[i] > 122)
        {
            vetorC[i] = vetorC[i] - 26;
        }
        printf("%c", vetorC[i]);
    }
    return 0;
}