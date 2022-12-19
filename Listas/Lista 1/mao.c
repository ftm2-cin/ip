#include <stdio.h>

int main()
{
    int n, x, y, z, cont, resto;
    scanf("%d", &n);
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    if (0 <= n <= 1000 && 0 <= x <= 1000 && 0 <= y <= 1000 && 0 <= z <= 1000)
    {
        cont = 0;
        resto = n - (x + y + z);
        if (resto >= 0)
        {
            cont = 3;
            printf("%d", cont);
        }
        else
        {
            resto = n - (x + y);
            if (resto >= 0)
            {
                cont = 2;
                printf("%d", cont);
            }
            else
            {
                resto = n - (x + z);
                if (resto >= 0)
                {
                    cont = 2;
                    printf("%d", cont);
                }
                else
                {
                    resto = n - (y + z);
                    if (resto >= 0)
                    {
                        cont = 2;
                        printf("%d", cont);
                    }
                    else
                    {
                        resto = n - x;
                        if (resto >= 0)
                        {
                            cont = 1;
                            printf("%d", cont);
                        }
                        else
                        {
                            resto = n - y;
                            if (resto >= 0)
                            {
                                cont = 1;
                                printf("%d", cont);
                            }
                            else
                            {
                                resto = n - z;
                                if (resto >= 0)
                                {
                                    cont = 1;
                                    printf("%d", cont);
                                }
                                else
                                {
                                    cont = 0;
                                    printf("%d", cont);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}