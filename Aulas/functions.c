#include <stdio.h>
#include <stdlib.h>
#include <math.h>
    // Preenche vetor
float *preencheVetor(int *tam) {
    scanf("%d", tam);
    float *v = (float *) malloc(*tam * sizeof(float));
    if(v==NULL) exit(1);
   
    for(int i=0; i<tam; i++){
        scanf("%f", &v[i]);
    }
    return v;
}
    // Ordena vetor
void ordenaVetor(float *v, int tam) {
    float bubble;
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam-1; j++)
            if(v[j] < v[j+1])
            {
                bubble = v[j];
                v[j] = v[j+1];
                v[j+1] = bubble;
            }
    }
}
    // Apresenta os 10% melhores
void apresenta10PMelhores(float v[], int Tam10) {
    for(int j = 0; j < Tam10; j++){
        printf("%f ", v[j]);
    }
}
    // Apresenta os 10% piores
void apresenta10PPiores(float v[], int tam, int Tam10) {
    for(int j = tam-1; j >= tam-Tam10; j--){
        printf("%f ", v[j]);
    }
}

int main()
{
    int tam;
    float *v;
    // Preenche vetor
    v = preencheVetor(&tam);
    // Ordena vetor
    ordenaVetor(v, tam);
    // Apresenta os 10% melhores
    int Tam10 = ceil(tam*0.1);
    apresenta10PMelhores(v, Tam10);
    // Apresenta os 10% piores
    apresenta10PPiores(v, tam, Tam10);
    free(v);
    return 0;
}