#include <stdio.h>

int main()
{
    int a = 0, c = 0, m = 0, qt1 = 0, qt2 = 0, qt3 = 0, qt4 = 0, qt5 = 0, v1, v2, v3, v4, v5, resto1, resto2;
    scanf("%d %d %d", &a, &c, &m);
    resto1 = a % m;
    resto2 = c % m;
    if (a > m)
    {
        qt1 = a / m;
        a = resto1;
    }
    else
    {
        qt1 = 1;
        a = 0;
    }

    if (c > m)
    {
        qt2 = c / m;
        c = resto2;
    }
    else
    {
        qt2 = 1;
        c = 0;
    }

    if (a + c == m)
    {
        qt5 += 1;
    }
    else if (resto1 % 2 == 0 && resto2 % 2 == 0 && (resto1 + resto2) != resto1 && (resto1 + resto2) != resto2)
    {
        qt5 += ((a + c) / m) + 1;
    }
    else
    {
        if (a >= 4)
        {
            qt1 = qt1 + 1;
        }
        else
        {
            qt3 = a + 1;
            qt1 = qt3 - 1;
        }
        if (c >= 4)
        {
            qt2 += 1;
        }
        else
        {
            qt4 = c + 1;
            qt2 -= qt4;
        }
    }

    v1 = qt1 * 3 * m;
    v3 = qt3 * 4 * (m + 1);
    v2 = qt2 * 2 * m;
    v4 = qt4 * 3 * (m + 1);
    v5 = qt5 * 2 * m;

    if (v1 > 0)
    {
        printf("%d mesas com adultos: R$%d\n", qt1, v1);
    }
    if (v3 > 0)
    {
        printf("%d mesas com adultos+1: R$%d\n", qt3, v3);
    }
    if (v2 > 0)
    {
        printf("%d mesas com criancas: R$%d\n", qt2, v2);
    }
    if (v4 > 0)
    {
        printf("%d mesas com criancas+1: R$%d\n", qt4, v4);
    }
    if (v5 > 0)
    {
        printf("%d mesas mistas: R$%d\n", qt5, v5);
    }
    return 0;
}
