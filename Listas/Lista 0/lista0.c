#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (c > a && c > b)
    {
        printf("O vencedor é Calculo 6 com um total de %d votos.\n", c);
    }
    else if (b > a && b > c)
    {
        printf("O vencedor é Introducao a Computacao com um total de %d votos.\n", b);
    }
    else if (a > b && a > c)
    {
        printf("O vencedor é Introducao a Programacao com um total de %d votos E O HEXA VEIO.\n", a);
    }
    else
    {
        printf("Empate");
    }
    return 0;
}