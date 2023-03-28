#include <stdio.h>

void troca(int vetor[]){
    int cache = 0;
    if (vetor[0] > vetor[1])
    {
        cache = vetor[0];
        vetor[0] = vetor[1];
        vetor[1] = cache;
    }
    printf("%d %d", vetor[0], vetor[1]);
}

int main(){
    int vetor[2];
    scanf("%d %d", &vetor[0], &vetor[1]);
    troca(vetor);
}