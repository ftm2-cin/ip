#include <stdio.h>

void ocorrencia(int vetor[], int tam, int desejado){
    int cont = 0;
    for (int i = 0; i < tam; i++)
    {
        if (vetor[i] == desejado)
        {
            cont++;
        }
    }
    printf("%d", cont);
}

int main(){
    int tam = 0, desejado;
    scanf("%d %d", &desejado, &tam);
    int vetor[tam];
    for (int i = 0; i < tam; i++)
    {
        scanf("%d", &vetor[i]);
    }
    ocorrencia(vetor, tam, desejado);
}