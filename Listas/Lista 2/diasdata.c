#include <stdio.h>

int main()
{
    int dia1 = 0, mes1 = 0, ano1 = 0, dia2 = 0, mes2 = 0, ano2 = 0, contdias = 0, i, j, k;
    scanf("%d/%d/%d", &dia1, &mes1, &ano1);
    scanf("%d/%d/%d", &dia2, &mes2, &ano2);

    for (i = ano1; i <= ano2; i++)
    {
        if (i % 4 == 0)
        {
            if (i == ano2)
            {
                for (j = 1; j <= mes2; j++)
                {
                    if (j == mes2)
                    {
                        for (k = 1; k < dia2; k++)
                        {
                            contdias = contdias + 1;
                        }
                    }
                    else
                    {
                        if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12)
                        {
                            contdias = contdias + 31;
                        }
                        else if (j == 4 || j == 6 || j == 9 || j == 11)
                        {
                            contdias = contdias + 30;
                        }
                        else if (j == 2)
                        {
                            contdias = contdias + 29;
                        }
                    }
                }
            }
            else
            {
                for (j = mes1; j <= 12; j++)
                {
                    if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12)
                    {
                        contdias = contdias + 31;
                    }
                    else if (j == 4 || j == 6 || j == 9 || j == 11)
                    {
                        contdias = contdias + 30;
                    }
                    else if (j == 2)
                    {
                        contdias = contdias + 29;
                    }
                }
            }
        }
        else
        {
            if (i == ano2)
            {
                for (j = 1; j <= mes2; j++)
                {
                    if (j == mes2)
                    {
                        for (k = 1; k < dia2; k++)
                        {
                            contdias = contdias + 1;
                        }
                    }
                    else
                    {
                        if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12)
                        {
                            contdias = contdias + 31;
                        }
                        else if (j == 4 || j == 6 || j == 9 || j == 11)
                        {
                            contdias = contdias + 30;
                        }
                        else if (j == 2)
                        {
                            contdias = contdias + 28;
                        }
                    }
                }
            }
            else
            {
                for (j = mes1; j <= 12; j++)
                {
                    if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12)
                    {
                        contdias = contdias + 31;
                    }
                    else if (j == 4 || j == 6 || j == 9 || j == 11)
                    {
                        contdias = contdias + 30;
                    }
                    else if (j == 2)
                    {
                        contdias = contdias + 28;
                    }
                }
            }
        }
        mes1 = 1;
    }
    printf("%d", contdias);
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