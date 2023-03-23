#include <stdio.h>
#include <stdlib.h>

int main(){
    int *lista = NULL;
    int tamLista = 0;
    char caracter;
    
    while (scanf("%c", &caracter) != EOF)
    {
        lista = (char *)realloc(lista, (tamLista + 1) * sizeof(char));
        lista[tamLista] = caracter;
        tamLista++;
    }
    printf("%d", tamLista);
    free(lista);
}