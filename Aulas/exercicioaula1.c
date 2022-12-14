#include <stdio.h>

int main()
{
    int num1, i, cont = 0, j;
    char app = 's';

    for (; app != 'n';)
    {
        printf("Digite um numero natural: ");
        scanf("%d", &num1);
        cont = 0;
        if (num1 > 0)
        {
            for (i = 1; i <= num1; i++)
            {
                if (num1 % i == 0)
                {
                    cont++;
                }
                if (cont > 2)
                {
                    break;
                }
            }
            if (cont > 2)
            {
                printf("Esse numero nao e primo\n");
            }
            else
            {
                printf("Esse numero e primo\n");
            }
            printf("Deseja continuar (s/n)? \n");
            scanf(" %c", &app);
        }
    }
}