#include <stdio.h>
#include <math.h>

int main()
{
    double x1, y1, x2, y2, x3, y3, iaf1, iaf2, iaf3;
    int k1, k2, k3;
    scanf("%lf %lf %d", &x1, &y1, &k1);
    scanf("%lf %lf %d", &x2, &y2, &k2);
    scanf("%lf %lf %d", &x3, &y3, &k3);
    if (y1 != 0)
        iaf1 = fabs((x1 * x1) * (2.71) / y1);
    else
        iaf1 = 0;

    if (y2 != 0)
        iaf2 = fabs((x2 * x2) * (2.71) / y2);
    else
        iaf2 = 0;

    if (y3 != 0)
        iaf3 = fabs((x3 * x3) * (2.71) / y3);
    else
        iaf3 = 0;

    if (iaf1 < 32.5)
    {
        printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Calouro.\n", k1, iaf1);
    }
    else if (iaf1 >= 32.5 && iaf1 <= 63.99)
    {
        printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Iniciado.\n", k1, iaf1);
    }
    else if (iaf1 >= 64 && iaf1 <= 127.99)
    {
        printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Morador do Grad.\n", k1, iaf1);
    }
    else if (iaf1 >= 128 && iaf1 <= 255.99)
    {
        printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Matemático Discreto.\n", k1, iaf1);
    }
    else if (iaf1 >= 256 && iaf1 <= 512)
    {
        printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Conserta Impressoras.\n", k1, iaf1);
    }
    else if (iaf1 > 512)
    {
        printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Sem volta.\n", k1, iaf1);
    }

    if (iaf2 < 32.5)
    {
        printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Calouro.\n", k2, iaf2);
    }
    else if (iaf2 >= 32.5 && iaf2 <= 63.99)
    {
        printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Iniciado.\n", k2, iaf2);
    }
    else if (iaf2 >= 64 && iaf2 <= 127.99)
    {
        printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Morador do Grad.\n", k2, iaf2);
    }
    else if (iaf2 >= 128 && iaf2 <= 255.99)
    {
        printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Matemático Discreto.\n", k2, iaf2);
    }
    else if (iaf2 >= 256 && iaf2 <= 512)
    {
        printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Conserta Impressoras.\n", k2, iaf2);
    }
    else if (iaf2 > 512)
    {
        printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Sem volta.\n", k2, iaf2);
    }

    if (iaf3 < 32.5)
    {
        printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Calouro.\n", k3, iaf3);
    }
    else if (iaf3 >= 32.5 && iaf3 <= 63.99)
    {
        printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Iniciado.\n", k3, iaf3);
    }
    else if (iaf3 >= 64 && iaf3 <= 127.99)
    {
        printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Morador do Grad.\n", k3, iaf3);
    }
    else if (iaf3 >= 128 && iaf3 <= 255.99)
    {
        printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Matemático Discreto.\n", k3, iaf3);
    }
    else if (iaf3 >= 256 && iaf3 <= 512)
    {
        printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Conserta Impressoras.\n", k3, iaf3);
    }
    else if (iaf3 > 512)
    {
        printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Sem volta.\n", k3, iaf3);
    }
}