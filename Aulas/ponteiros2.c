#include <stdio.h>
#include <stdlib.h>
// malloc faz a alocação na memoria sem limpar a memoria
// calloc faz a alocação na memoria limpando todos os bytes que foram alocados. PRECISA DE DOIS PARAMETROS
// realloc recebe um ponteiro e uma alocação, muda de tamanho sem perde o conteúdo(REAPROVEITAMENTO DE TABELA)
int main()
{
    int *p, *pTmp, n, i;
    printf("Quantos elementos voce precisa? ");
    scanf("%d", &n);
    while (n != 0)
    {
        pTmp = p;
        p = (int *) realloc(pTmp, n * sizeof(int));
        if (p == NULL)
        {
            printf("Problema de alocação\n");
            free(pTmp);
            exit(1);
        }
        for (i = 0; i < n; i++)
        {
            p[i] = i;
        }
        printf("Quantos elementos voce precisa? ");
        scanf("%d", &n);
    }
    free(p);
    return 0;
}