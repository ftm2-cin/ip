#include <stdio.h>
#include <math.h>

int main()
{
    long long int n, a , b, soma1, soma2, soma3, soma4, somaf;
    scanf("%lld", &n);
    scanf("%lld %lld", &a, &b);
    soma1 = (1 + n) * n / 2;
    soma2 = (a + (n - (n % a))) * (n/a)/2;
    soma3 = (b + (n - (n % b))) * (n/b)/2;
    soma4 = ((a*b) + (n - (n % (a*b)))) * (n/(a*b))/2;
    soma1 = soma1 - (soma2 + soma3) + soma4;

    if (soma1 % 2 == 0)
    {
        printf("%lld\n", soma1);
        printf("La ele!!!");
    }else
    {
        printf("%lld\n", soma1);
        printf("Opa xupenio AULAS...");
    }
}