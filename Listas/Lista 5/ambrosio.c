#include <stdio.h>
#include <string.h>

typedef struct
{
    int passagem, poltrona, idade;
    char data[11];
    char origem[25];
    char destino[25];
    char hora[10];
    char nome[50];
} Pessoa;

int main()
{
    int i, c, soma = 0, media = 0, cont = 0;
    Pessoa lista[44];
    for (i = 0; i < 45; i++)
    {
        fflush(stdin);
        scanf("%d", &lista[i].passagem);
        if (lista[i].passagem == -1)
            break;
        scanf(" %[^\n]", lista[i].data);
        scanf(" %[^\n]", lista[i].origem);
        scanf(" %[^\n]", lista[i].destino);
        scanf(" %[^\n]", lista[i].hora);
        scanf("%d", &lista[i].poltrona);
        scanf("%d", &lista[i].idade);
        scanf(" %[^\n]", lista[i].nome);
    }
    for (c = 0; c <= i; c++)
    {
        soma += lista[c].idade;
    }
    media = soma / (i + 1);

    for (c = 0; c <= i; c++)
    {
        if (lista[c].poltrona % 2 == 0 && lista[c].idade > media)
        {
            printf("%s\n", lista[c].nome);
        }
    }
    return 0;
}
