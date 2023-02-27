 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
    int *pVet;
    pVet = (int *) malloc(100 * sizeof(int));
    if (pVet == NULL)
    {
        printf("Erro de alocação\n");
        exit(1);
    }
    int i;
    for (i = 0; i < 100; i++)
    {
        pVet[i] = i;
    }
    free(pVet);
    
    return  0;
 }