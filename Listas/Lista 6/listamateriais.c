#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char nome[50];
    float preco;

}Material;

void crescente_money(Material *lista, int qtd){
    Material cache;
    for (int i = 0; i < qtd; i++)
    {
        for (int j = 1; j < qtd; j++)
        {
            if (lista[j - 1].preco > lista[j].preco)
            {
                cache = lista[j];
                lista[j] = lista[j - 1];
                lista[j - 1] = cache;
            }
        } 
    }
}

void crescente_alfa(Material *lista, int stop){
    Material cache;
    for (int i = 0; i < stop; i++)
    {
        for (int j = 0; j < stop-1; j++)
        {
            if (strcmp(lista[j].nome, lista[j + 1].nome) > 0)
            {
                cache = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = cache;
            }
        } 
    }
}


int main(){
    Material *lista = NULL;
    float dinheiro, soma = 0;
    int qtd, stop = 0;

    scanf("%f %d", &dinheiro, &qtd);

    lista = (Material *)malloc(qtd * sizeof(Material));

    for (int i = 0; i < qtd; i++)
    {
        scanf("%s %f", lista[i].nome, &lista[i].preco);
    }
    
    crescente_money(lista, qtd);

    for (int i = 0; i < qtd; i++)
    {
        if (soma + lista[i].preco <= dinheiro)
        {
            soma = soma + lista[i].preco;
            stop++;
        }   
    }
    lista = (Material *)realloc(lista, stop * sizeof(Material));
    crescente_alfa(lista, stop);

    for (int i = 0; i < stop; i++)
    {
        printf("%s %.2f\n", lista[i].nome, lista[i].preco);
    }
    printf("%.2f", dinheiro - soma);
    free(lista);
}