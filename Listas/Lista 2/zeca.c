#include <stdio.h>

int main()
{
    int i, j, k, m, primoa = 0, primos = 0, primoz = 0, cont = 0, cont2 = 0, cont3 = 0, n1, n2, loop2 = 0, loop3 = 0;
    scanf("%d %d", &n1, &n2);
    if (n1 == 0)
    {
        n1 = 1;
    }
    if (n1 > n2 || n1 < 0 || n2 < 0)
    {
        printf("0");
    }
    else
    {
        for (j = n1; j < n2; j++)
        {
            cont = 0;
            cont2 = 0;
            cont3 = 0;
            primoa = 0;
            primos = 0;
            loop2 = 0;
            loop3 = 0;
            for (i = 1; i <= j; i++)
            {
                if (j % i == 0)
                {
                    cont++;
                }
            }
            if (cont <= 2)
            {
                for (m = j; cont2 != 2; m--)
                {
                    cont2 = 0;
                    loop2++;
                    primoa = j - loop2;
                    for (i = 1; i <= primoa; i++)
                    {
                        if (primoa % i == 0)
                        {
                            cont2++;
                        }
                    }
                }
                for (k = j; cont3 != 2; k++)
                {
                    cont3 = 0;
                    loop3++;
                    primos = j + loop3;
                    for (i = 1; i <= primos; i++)
                    {
                        if (primos % i == 0)
                        {
                            cont3++;
                        }
                    }
                }
                if ((primoa + primos) / 2 == j)
                {
                    primoz++;
                }
            }
        }
        printf("%d", primoz);
    }
}