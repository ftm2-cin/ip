#include <stdio.h>

int main()
{
    int loop, qtd, elem = 0;
    scanf("%d", &loop);
    int vetorP[qtd];
    for (int i = 0; i < loop; i++)
    {
        scanf("%d", &qtd);
        for (int a = 0; a < qtd; a++)
        {
            scanf("%d", &vetorP[a]);
        }
        for (int a = 0; a < qtd; a++)
        {
            if (vetorP[a] > vetorP[a + 1])
            {
                elem++;
            }
        }
        if (elem == 0)
        {
            printf("0");
            break;
        }
        else
        {
            printf("%d\n", elem + 1);
            for (int a = 0; a < elem + 1; a++)
            {
                printf("%d", vetorP[a]); //PROBLEMA AQUI
            }
        }
    }
}