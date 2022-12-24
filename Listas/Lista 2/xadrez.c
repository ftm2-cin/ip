#include <stdio.h>

int main()
{
    int n, i, times;
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        times = n;
        while (n != 0)
        {
            for (i = 1; i <= times / 2; i++)
            {
                printf("A");
                printf(".");
                if (i == times / 2)
                {
                    printf("\n");
                }
            }
            for (i = 1; i <= times / 2; i++)
            {
                printf(".");
                printf("A");
                if (i == times / 2)
                {
                    printf("\n");
                }
            }
            n = n - 2;
        }
    }
    else
    {
        times = n;
        while (n != 0)
        {
            for (i = 1; i <= times;)
            {
                printf("A");
                i++;
                if (i <= times)
                {
                    printf(".");
                    i++;
                }
            }
            printf("\n"); 
            if (n != 0)
            {
                n = n - 1;
            }
            if (n != 0)
            {
                for (i = 1; i <= times;)
                {
                    printf(".");
                    i++;
                    if (i <= times)
                    {
                        printf("A");
                        i++;
                    }
                }
                printf("\n");
            }
            if (n != 0)
            {
                n = n - 1;
            }
        }
    }
}