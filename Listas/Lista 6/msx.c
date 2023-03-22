#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *frase = NULL;
    int tamanhoFrase = 0;
    int continuar = 1;

    while (continuar)
    {
        tamanhoFrase = 0;
        char caractere = getchar();
        while (caractere != '\n')
        {
            tamanhoFrase++;
            frase = (char *)realloc(frase, tamanhoFrase * sizeof(char));
            frase[tamanhoFrase - 1] = caractere;
            caractere = getchar();
        }
        frase[tamanhoFrase] = '\0';
        if (strcmp(frase, "the end!") == 0)
        {
            continuar = 0;
        }
        else
        {
            for (int i = 0; i < tamanhoFrase; i++)
            {
                frase[i] = toupper(frase[i]);
            }
            for (int i = 0; i < tamanhoFrase; i++)
            {
                printf("%c", frase[i]);
            }
            printf("\n");
        }
    }

    if (frase != NULL)
    {
        free(frase);
    }

    return 0;
}