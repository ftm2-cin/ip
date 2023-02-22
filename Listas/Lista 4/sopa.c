#include <stdio.h>
#include <string.h>

int main()
{
    char letras[30], palavra[30];
    int qtd, i, j, k, formadas = 0;

    scanf("%s %d", letras, &qtd);

    char palavras[5][30];

    for (i = 0; i < qtd; i++) 
    {
        scanf("%s", palavras[i]);
    }

    for (i = 0; i < qtd; i++) 
    {
        char aux[30];
        strcpy(aux, letras);
        
        int pode_formar = 1;
        for (j = 0; j < strlen(palavras[i]); j++) 
        {
            int encontrou_letra = 0;
            for (k = 0; k < strlen(aux); k++) 
            {
                if (palavras[i][j] == aux[k]) 
                {
                    encontrou_letra = 1;
                    for (; k < strlen(aux) - 1; k++) 
                    {
                        aux[k] = aux[k+1];
                    }
                    aux[k] = '\0';
                    break;
                }
            }
            if (!encontrou_letra) 
            {
                pode_formar = 0;
                break;
            }
        }
        if (pode_formar) 
        {
            formadas++;
        }
    }
    printf("E possivel formar %d palavras com esse conjunto\n", formadas);
    return 0;
}