#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d, e, f, g, h;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    scanf("%d", &f);
    scanf("%d", &g);
    scanf("%d", &h);

    if ((a == b) || (a == d) || (a == f) || (a == h))
    {
        if ((b != a) && (b != d))
        {
            if ((h == g) || (h == f))
            {
                if ((g == h) && (d == c))
                {
                    if ((c == e) && (f == a))
                    {
                        printf("Conseguimos times suficientes!\n");
                    }
                    else if ((c == e) && (f != a))
                    {
                        printf("Alguem nao esta satisfeito...\n");
                    }
                    else if ((c != e) && (f != a))
                    {
                        printf("Conseguimos times suficientes!\n");
                    }
                    else if ((c != e) && (f == a))
                    {
                        printf("Alguem nao esta satisfeito...\n");
                    }
                }
                else if ((g == h) && (f != a))
                {
                    printf("Alguem nao esta satisfeito...\n");
                }
                else
                {
                    if ((c == e) && (f == a))
                    {
                        printf("Conseguimos times suficientes!\n");
                    }
                    else if ((c == e) && (f != a))
                    {
                        printf("Alguem nao esta satisfeito...\n");
                    }
                    else if ((c != e) && (f != a))
                    {
                        printf("Conseguimos times suficientes!\n");
                    }
                    else if ((c != e) && (f == a))
                    {
                        printf("Alguem nao esta satisfeito...\n");
                    }
                }
            }
            else
                printf("Alguem nao esta satisfeito...\n");
        }
        else
            printf("Alguem nao esta satisfeito...\n");
    }
    else
        printf("Alguem nao esta satisfeito...\n");
}