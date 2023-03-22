#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[50];
    float valor;
    int quantidade;
} Compra;

int main()
{
    Compra *lista = NULL;
    int tamanhoLista = 0, qtd_remover = 0;
    char funcao[20], produto[50];
    while (scanf("%s", funcao) != EOF)
    {
        if (strcmp(funcao, "INSERIR") == 0)
        {
            lista = (Compra *)realloc(lista, (tamanhoLista + 1) * sizeof(Compra));
            scanf("%s %f %d", lista[tamanhoLista].nome, &lista[tamanhoLista].valor, &lista[tamanhoLista].quantidade);
            tamanhoLista++;
        }
        else if (strcmp(funcao, "REMOVER") == 0)
        {
            scanf("%s %d", produto, &qtd_remover);
            for (int i = 0; i < tamanhoLista; i++)
            {
                if (strcmp(lista[i].nome, produto) == 0)
                {
                    lista[i].quantidade = lista[i].quantidade - qtd_remover;
                    if (lista[i].quantidade == 0)
                    {
                        memmove(&lista[i], &lista[i + 1], (tamanhoLista - i - 1) * sizeof(Compra));
                        tamanhoLista--;
                        lista = realloc(lista, tamanhoLista * sizeof(Compra));
                    }
                }
            }
        }
        else if (strcmp(funcao, "REMOVERGRUPO") == 0)
        {
            float valor;
            scanf("%f", &valor);
            int i = 0;
            while (i < tamanhoLista)
            {
                if (lista[i].valor > valor)
                {
                    memmove(&lista[i], &lista[i + 1], (tamanhoLista - i - 1) * sizeof(Compra));
                    tamanhoLista--;
                }
                else
                {
                    i++;
                }
            }
            lista = realloc(lista, tamanhoLista * sizeof(Compra));
        }
        else if (strcmp(funcao, "CONSULTAR") == 0)
        {
            float valor = 0;
            for (int i = 0; i < tamanhoLista; i++)
            {
                valor = valor + (lista[i].valor * lista[i].quantidade);
            }
            printf("Atualmente a lista esta em R$%.1f\n\n", valor);
        }else if (strcmp(funcao, "PROCURAR") == 0)
        {
            char palavra[30];
            scanf("%s", palavra);
            if (tamanhoLista == 0)
            {
                printf("%s nao foi encontrado.\n\n", palavra);
            }
            for (int i = 0; i < tamanhoLista; i++)
            {
                if (strcmp(lista[i].nome, palavra) == 0)
                {
                    printf("%s\n- %.1f\n- %d\n\n", lista[i].nome, lista[i].valor, lista[i].quantidade);
                    break;
                }else if (i == tamanhoLista - 1)
                {
                    printf("%s nao foi encontrado.\n\n", palavra);
                }    
            }
        }
    }
    free(lista);
}