#include <stdio.h>
typedef struct
{
    int coeficiente;
    char variavel;
    int expoente;
} Monomio;

void derivada(int *coeficiente, int *expoente)
{
    if (*expoente == 0)
    {
        *coeficiente = 0;
    }
    else
    {
        *coeficiente = (*coeficiente) * (*expoente);
        *expoente = *expoente - 1;
    }
}
int main()
{
    int n;
    while (n != 0)
    {
        scanf("%d", &n);
        Monomio equacao[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d %c %d", &equacao[i].coeficiente, &equacao[i].variavel, &equacao[i].expoente);
            derivada(&equacao[i].coeficiente, &equacao[i].expoente);
        }
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                if (equacao[i].coeficiente != 0 && equacao[i].expoente == 0)
                {
                    if(equacao[i].coeficiente > 0)
                        printf("f'(%c)=+%d", equacao[i].variavel, equacao[i].coeficiente);
                    else
                        printf("f'(%c)=%d", equacao[i].variavel, equacao[i].coeficiente);
                }
                else if (equacao[i].coeficiente > 0)
                {
                    printf("f'(%c)=+%d%c^%d",equacao[i].variavel, equacao[i].coeficiente, equacao[i].variavel, equacao[i].expoente);    
                }
                else if (equacao[i].coeficiente < 0)
                {
                    printf("f'(%c)=%d%c^%d",equacao[i].variavel, equacao[i].coeficiente, equacao[i].variavel, equacao[i].expoente);
                }else
                    printf("f'(0)=0", equacao[i].variavel);
            }
            else
            {
                if (equacao[i].coeficiente > 0)
                {
                    if (equacao[i].coeficiente == 0 && equacao[i].expoente == 0)
                    {

                    }
                    else if (equacao[i].coeficiente != 0 && equacao[i].expoente == 0)
                    {
                        printf("+%d", equacao[i].coeficiente);
                    }
                    else
                        printf("+%d%c^%d", equacao[i].coeficiente, equacao[i].variavel, equacao[i].expoente);
                }
                else
                {
                    if (equacao[i].coeficiente == 0 && equacao[i].expoente == 0)
                    {

                    }
                    else if (equacao[i].coeficiente != 0 && equacao[i].expoente == 0){
                        printf("%d", equacao[i].coeficiente);
                    }
                    else{
                        printf("%d%c^%d", equacao[i].coeficiente, equacao[i].variavel, equacao[i].expoente);
                    }
                }
            }
        }
        printf("\n");
    }
}