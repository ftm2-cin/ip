#include <stdio.h>
#include <stdlib.h>
void buscar(char *frase, char busca, int tamanhoFrase){
    int pos;
    for (int i = 0; i < tamanhoFrase; i++)
    {
        if (frase[i] == busca)
        {
            pos = i;
            break;
        }else
            pos = -1;
    }
    printf("%d", pos);
}
int main(){
    char *frase = NULL;
    int tamanhoFrase = 0;
    char caractere = getchar();
    while (caractere != '\n')
    {
        tamanhoFrase++;
        frase = (char *)realloc(frase, tamanhoFrase * sizeof(char));
        frase[tamanhoFrase - 1] = caractere;
        caractere = getchar();
    }
    frase[tamanhoFrase] = '\0';

    char busca = getchar();

    buscar(frase, busca, tamanhoFrase);
}