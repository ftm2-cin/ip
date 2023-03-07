#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float *preencheVetor(int *tam)
{
    scanf("%d", tam);

    float *v = (float *) malloc((int)tam * sizeof(float));
    if(v == NULL) exit(1);
     
    for (int i = 0; i < tam; i++)
    {
        scanf("%f", &v[i]);
    }
    return v;
}

void ordenaVetor(float v[], int tam){
    float bubble;
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam - 1; j++)
        {
            if (v[j] < v[j + 1])
            {
                bubble = v[j];
                v[j] = v[j + 1];
                v[j + 1] = bubble;
            }         
        } 
    }   
}

void apresenta10PMelhores(float v[], int Tam10)
{
    for (int i = 0; i < Tam10; i++)
    {
        printf("%f", v[i]);
    }
}

void apresenta10PPiores(float v[], int tam, int Tam10)
{
    for (int i = tam - 1; i >= tam - Tam10; i--)
    {
        printf("%f", v[i]);
    }
}

int main()
{
    int tam;
    float *v;
    
    v = preencheVetor(&tam);

    ordenaVetor(v, tam);

    int Tam10 = ceil(tam * 0.1);

    apresenta10PMelhores(v, Tam10);

    apresenta10PPiores(v, tam, Tam10);

    free(v);
    return 0;
}