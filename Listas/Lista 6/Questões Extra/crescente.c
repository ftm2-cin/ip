#include <stdio.h>
#include <stdlib.h>

void crescente(int *lista, int tamLista){
    int cache;
    for (int i = 0; i < tamLista; i++)
    {
        for (int j = 1; j < tamLista; j++)
        {
            if (lista[j - 1] > lista[j])
            {
                cache = lista[j];
                lista[j] = lista[j - 1];
                lista[j - 1] = cache;
            }
        } 
    }
}

int main(){
    int *lista = NULL, tamLista = 0;
    int numero = 0;
    
    while (scanf("%d", &numero) != EOF)
    {
        lista = (int *)realloc(lista, (tamLista + 1) * sizeof(int));
        lista[tamLista] = numero;
        tamLista++;
    }
    
    crescente(lista, tamLista);
    
    for (int i = 0; i < tamLista; i++)
    {
        printf("%d ", lista[i]);
    }

    free(lista);
}