#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int dia, mes, ano;
    scanf("%d %d %d", &dia, &mes, &ano);

    if (ano >= 1900 && ano <= 2100)
    {
        if (mes >= 1 && mes <= 12)
        {
            if (mes == 1 ||mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
            {
                if (dia >= 1 && dia <= 31)
                {
                    printf("valida");
                }
                else
                    printf("invalida");
            }
            if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
            {
                if (dia >= 1 && dia <= 30)
                {
                    printf("valida");
                }
                else
                    printf("invalida");
            }
            else if (mes == 2)
            {
                if ((ano % 4 == 0) && (ano != 1900 && ano != 2100))
                {
                    if (dia >= 1 && dia <= 29)
                    {
                        printf("valida");
                    }
                    else
                        printf("invalida");
                }
                else if (dia >= 1 && dia <= 28)
                {
                    printf("valida");
                }
                else
                    printf("invalida");
            }
        }
        else
            printf("invalida");
    }
    else
        printf("invalida");
    return 0;
}

/*JANEIRO 1 A 31
FEVEREIRO 1 A 28
MARÇO 1 A 31
ABRIL 1 A 30
MAIO 1 A 31
JUNHO 1 A 30
JULHO 1 A 31
AGOSTO 1 A 31
SETEMBRO 1 A 30
OUTUBRO 1 A 31
NOVEMBRO 1 A 30
DEZEMBRO 1 A 31
*/