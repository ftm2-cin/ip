#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, c, m, qt1, qt2, qt3, qt4, v1, v2, v3, v4, resto1, resto2;
    scanf("%d %d %d", &a, &c, &m);
    resto1 = a % m;
    resto2 = c % m;
    if (a >= 1 && a <= 100000 && c >= 1 && c <= 100000 && m >= 1 && m <= 20)
    {
        if (a % m == 0 && c % m == 0)
        {
            qt1 = a / m;
            qt2 = c / m;
            v1 = qt1 * (3 * m);
            v2 = qt2 * (2 * m);
            printf("%d mesas com adultos: R$%d\n", qt1, v1);
            printf("%d mesas com criancas: R$%d\n", qt2, v2);
        }
        else if (resto1 + resto2 == m)
        {
            qt1 = ((a - a % m) / m);
            qt2 = ((c - c % m) / m);
            qt3 = 1;
            v1 = qt1 * (3 * m);
            v2 = qt2 * (2 * m);
            v3 = qt3 * (2 * m);
            printf("%d mesas com adultos: R$%d\n", qt1, v1);
            printf("%d mesas com criancas: R$%d\n", qt2, v2);
            printf("%d mesas mistas: R$%d\n", qt3, v3);
        }
        else if (resto1 % 2 == 0 && resto2 % 2 == 0 && (resto1 + resto2) != resto1 && (resto1 + resto2) != resto2)
        {
            qt1 = ((a - a % m) / m);
            qt2 = ((c - c % m) / m);
            if (m >(resto1 + resto2))
            {
                qt3 = 1;
            }else
                qt3 = 2;
            
            v1 = qt1 * (3 * m);
            v2 = qt2 * (2 * m);
            v3 = qt3 * (2 * m);
            printf("%d mesas com adultos: R$%d\n", qt1, v1);
            printf("%d mesas com criancas: R$%d\n", qt2, v2);
            printf("%d mesas mistas: R$%d\n", qt3, v3);
        }
        else if (m <(resto1 + resto2))
        {
            if (resto1 >= 4)
            {
                qt1 = ((a - a % m) / m) + 1;
                v1 = qt1 * (3 * m);
                qt2 = ((c - c % m) / m) - resto2;
                v2 = qt2 * (2 * m);
                qt3 = resto2;
                v3 = ((qt3 * (3 * m)) + (resto2 * 3));
                printf("%d mesas com adultos: R$%d\n", qt1, v1);
                printf("%d mesas com criancas: R$%d\n", qt2, v2);
                printf("%d mesas com criancas+1: R$%d\n", qt3, v3);
            }
            else if (resto2 >= 4)
            {
                qt1 = ((c - c % m) / m) + 1;
                v1 = qt1 * (2 * m);
                qt2 = ((a - a % m) / m) - resto1;
                v2 = qt2 * (3 * m);
                qt3 = resto1;
                v3 = ((qt3 * (4 * m)) + (resto1 * 4));
                printf("%d mesas com adultos: R$%d\n", qt2, v2);
                printf("%d mesas com adultos+1: R$%d\n", qt3, v3);
                printf("%d mesas com criancas: R$%d\n", qt1, v1);
            }
        }
        else if (resto1 >= 1 && resto1 < 4 || resto2 >= 1 && resto2 < 4)
        {
            qt1 = ((a - a % m) / m);
            qt2 = ((c - c % m) / m);
            qt3 = (resto1);
            qt4 = (resto2);
            v3 = ((qt3 * (4 * m)) + (resto1 * 4));
            v4 = ((qt4 * (3 * m)) + (resto2 * 3));
            if (qt1 != 0 && qt1 != 1)
            {
                v1 = (qt1 - resto1) * (3 * m);
                printf("%d mesas com adultos: R$%d\n", qt1, v1);
            }
            if (resto1 != 0)
            {
                v1 = qt1 * (3 * m);
                printf("%d mesas com adultos+1: R$%d\n", qt3, v3);
            }
            if (qt2 != 0 && qt2 != 1)
            {
                v2 = (qt2 - resto2) * (2 * m);
                printf("%d mesas com criancas: R$%d\n", qt2, v2);
            }
            if (resto2 != 0)
            {
                v2 = qt2 * (2 * m);
                printf("%d mesas com criancas+1: R$%d\n", qt4, v4);
            }
        }
        else if (resto1 >= 4 && resto2 >= 4)
        {
            qt1 = ((a - a % m) / m) + 1;
            qt2 = ((c - c % m) / m) + 1;
            v1 = qt1 * (3 * m);
            v2 = qt2 * (2 * m);
            printf("%d mesas com adultos: R$%d\n", qt1, v1);
            printf("%d mesas com criancas: R$%d\n", qt2, v2);
        }
        else if (resto1 >= 4)
        {
            qt1 = ((a - a % m) / m) + 1;
            qt2 = ((c - c % m) / m);
            v1 = qt1 * (3 * m);
            v2 = qt2 * (2 * m);
            printf("%d mesas com adultos: R$%d\n", qt1, v1);
            printf("%d mesas com criancas: R$%d\n", qt2, v2);
        }
        else if (resto2 >= 4)
        {
            qt1 = ((a - a % m) / m);
            qt2 = ((c - c % m) / m) + 1;
            v1 = qt1 * (3 * m);
            v2 = qt2 * (2 * m);
            printf("%d mesas com adultos: R$%d\n", qt1, v1);
            printf("%d mesas com criancas: R$%d\n", qt2, v2);
        }
    }
}