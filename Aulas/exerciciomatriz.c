#include <stdio.h>

int main(void)
{
    int DIM;
    printf("Qual o DIM ?"); scanf("%d", &DIM);
    int matriz[DIM][DIM], i, j;
    char identidade  = 1;
    for (i = 0; i < DIM && identidade; i++)
    {
        for (j = 0; j < DIM && identidade; j++)
        {
            printf("Digite o elemento Mat[%d][%d]", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
            identidade = (i == j && matriz[i][j] == 1) || (i != j && matriz[i][j] == 0);
        }
    }
    if (identidade)
        {
            printf("IDENTIDADE\n");
        }else
        {
            printf("NAO IDENTIDADE\n");
        }
    return 0;
}