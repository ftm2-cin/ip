#include <stdio.h>
#include <string.h>

typedef struct
{
    float ataque, defesa;
    char nome[50];
    char tipo[10];
    float fator;
} Pokemon;

int main()
{
    int vezes;
    float fator;
    Pokemon defesa;
    scanf(" %s %s %f %f", defesa.nome, defesa.tipo, &defesa.ataque, &defesa.defesa);
    scanf("%d", &vezes);
    Pokemon ataques[vezes];

    for (int i = 0; i < vezes; i++)
    {
        fflush(stdin);
        scanf("%s %s %f %f", ataques[i].nome, ataques[i].tipo, &ataques[i].ataque, &ataques[i].defesa);
    }

    for (int i = 0; i < vezes; i++)
    {
        if (strcmp(defesa.tipo, "agua") == 0 && strcmp(ataques[i].tipo, "grama") == 0)
        {
            ataques[i].ataque = ataques[i].ataque * 1.5;
        }
        else if (strcmp(defesa.tipo, "fogo") == 0 && strcmp(ataques[i].tipo, "agua") == 0)
        {
            ataques[i].ataque = ataques[i].ataque * 1.5;
        }
        else if (strcmp(defesa.tipo, "grama") == 0 && strcmp(ataques[i].tipo, "fogo") == 0)
        {
            ataques[i].ataque = ataques[i].ataque * 1.5;
        }
    }

    for (int i = 0; i < vezes; i++)
    {
        ataques[i].fator = ataques[i].ataque - defesa.defesa;
    }

    for (int i = 0; i < vezes - 1; i++)
    {
        for (int j = 0; j < vezes - i - 1; j++)
        {
            if (ataques[j].fator < ataques[j + 1].fator)
            {
                Pokemon temp = ataques[j];
                ataques[j] = ataques[j + 1];
                ataques[j + 1] = temp;
            }
            else if (ataques[j].fator == ataques[j + 1].fator)
            {
                int num = strcmp(ataques[j].nome, ataques[j + 1].nome);
                if (num > 0)
                {
                    Pokemon temp = ataques[j];
                    ataques[j] = ataques[j + 1];
                    ataques[j + 1] = temp;
                }
            }
        }
    }

    for (int i = 0; i < vezes; i++)
    {
        printf("%d. %s\n", i + 1, ataques[i].nome);
    }
    return 0;
}