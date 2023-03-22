#include <stdio.h>
#include <stdlib.h>

void inverte_vetor(int* vet, int tamanho) {
    int i = 0;
    int j = tamanho - 1;
    while (i < j) {
        int temp = vet[i];
        vet[i] = vet[j];
        vet[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    int *digito = NULL;
    int tamanhoInt = 0;
    char caractere;

    while (scanf("%c", &caractere) == 1 && caractere != '\n')
    {
        tamanhoInt++;
        int numero = caractere - '0';
        int *novo_digito = (int *)realloc(digito, tamanhoInt * sizeof(int));
        digito = novo_digito;
        digito[tamanhoInt - 1] = numero;
    }
    
    inverte_vetor(digito, tamanhoInt);

    for (int i = 0; i < tamanhoInt; i++)
    {
        printf("%d", digito[i]);
    }

    free(digito);
    return 0;
}
