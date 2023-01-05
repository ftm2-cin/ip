#include <stdio.h>
#include <math.h>
#define formula(x, y) x *(pow(y, 2))

int main()
{
    double a, b, c, n, base, soma = 0;
    scanf("%lf %lf %lf %lf", &a, &b, &n, &c);
    base = (b - a) / n;
    
    for (int i = 0; i < n; i++)
    {
        a = a + base;
        soma = soma + formula(base, a);
    }
    if (soma > c)
    {
        printf("Maior");
    }
    else if (soma == c)
    {
        printf("Igual");
    }
    else
    {
        printf("Menor");
    }
    return 0;
}