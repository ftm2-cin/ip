#include <stdio.h>

int main()
{
    int carro = 0, vaga1 = 0, vaga2 = 0, qtd = 0;
    char acao;
    scanf("%d", &qtd);
    int vetorGaragem[qtd];
    for (int i = 0; i < qtd; i++)
    {
        vetorGaragem[i] = 0;
    }
    while (vaga1 != -1 && carro != -1)
    {
        scanf("%c %d %d", &acao, &carro, &vaga1);

        if (acao == 'm')
        {
            scanf("%d", &vaga2);
        }
        if (carro == -1)
        {
            break;
        }
        if (acao == 'i')
        {
            if (vetorGaragem[vaga1] == 0)
            {
                vetorGaragem[vaga1] = carro;
            }
            else if (vetorGaragem[vaga1] != 0)
            {
                printf("Not empty\n");
                for (int i = vaga1; i < qtd; i++)
                {
                    if (vetorGaragem[i] == 0)
                    {
                        vetorGaragem[i] = carro;
                        break;
                    }
                    else if (i == qtd - 1)
                    {
                        printf("FULL\n");
                    }
                }
            }
        }
        else if (acao == 'r')
        {
            if (carro != vetorGaragem[vaga1])
            {
                printf("Not Found\n");
            }
            else
            {
                vetorGaragem[vaga1] = 0;
            }
        }
        else if (acao == 'm')
        {
            if (vetorGaragem[vaga2] == 0 && carro == vetorGaragem[vaga1])
            {
                vetorGaragem[vaga1] = 0;
                vetorGaragem[vaga2] = carro;
            }
            else if(carro == vetorGaragem[vaga1] && vetorGaragem[vaga2] != 0)
            {
                printf("Not empty\n");
                for (int i = vaga2; i < qtd; i++)
                {
                    if (vetorGaragem[i] == 0)
                    {
                        vetorGaragem[i] = carro;
                        break;
                    }
                    else if (i == qtd - 1)
                    {
                        if (carro == vetorGaragem[vaga1])
                        {
                            break;
                        }else
                            printf("FULL\n");
                    }
                }
            }else
            {
                printf("Not Found\n");
            }     
        }
    }
    for (int f = 0; f < qtd; f++)
    {
        if (vetorGaragem[f] != 0)
        {
            printf("Vaga %d -> %d\n", f, vetorGaragem[f]);
        }
    }
    return 0;
}