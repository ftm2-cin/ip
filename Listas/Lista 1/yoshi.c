#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int m, a, b, c, d, ca, cb, cc, cd;
    scanf("%d", &m);
    scanf("%d %d %d %d", &a, &b, &c, &d);
    ca = 80 / a;
    cb = 100 / b;
    cc = 120 / c;
    cd = 80 / d;

    if (m < a && m < b && m < c && m < d)
    {
        printf("Acho que vou a pe :(");
    }
    else if (ca >= cb && ca >= cc && ca >= cd)
    {
        printf("Verde");
    }
    else if (cb > ca && cb >= cc && cb >= cd)
    {
        printf("Vermelho");
    }
    else if (cc > ca && cc > cb && cc >= cd)
    {
        printf("Roxo");
    }
    else if (cd > ca && cd > cb && cd > cc)
    {
        printf("Amarelo");
    }
}