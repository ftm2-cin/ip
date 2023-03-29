#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    float pReal;
    float pImag;
} Complexo;

void empilhe(Complexo **cPilha, Complexo umC, int *tPilha)
{
    Complexo *temp = (Complexo *)realloc(*cPilha, (*tPilha + 1) * sizeof(Complexo));
    if (temp == NULL)
    {
        free(*cPilha);
        exit(1);
    }
    *cPilha = temp;
    (*cPilha)[*tPilha].pReal = umC.pReal;
    (*cPilha)[*tPilha].pImag = umC.pImag;
    (*tPilha)++;
}

Complexo desempilhe(Complexo **cPilha, int *tPilha)
{
    Complexo copia = (*cPilha)[*tPilha - 1];
    *cPilha = (Complexo *)realloc(*cPilha, (*tPilha - 1) * sizeof(Complexo));
    if (*tPilha > 0 && *cPilha == NULL)
    {
        free(*cPilha);
        exit(1);
    }
    (*tPilha)--;
    return copia;
}

Complexo topo(Complexo *cPilha, int tPilha)
{
    return cPilha[tPilha - 1];
}

int pilhaVazia(int tPilha)
{
    if (tPilha == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void salvePilha(Complexo *cPilha, int tPilha)
{
    FILE *pilha;
    if ((pilha = fopen("pilha.bin", "wb")) != NULL)
    {
        fwrite(&tPilha, sizeof(int), 1, pilha);
        for (int i = 0; i < tPilha; i++)
        {
            fwrite(&(cPilha[i].pReal), sizeof(float), 1, pilha);
            fwrite(&(cPilha[i].pImag), sizeof(float), 1, pilha);
        }
        fclose(pilha);
    } else {
        printf("Erro ao abrir arquivo para escrita.\n");
    }
}

Complexo *recuperePilha(int *tPilha)
{
    FILE *pilha;
    Complexo *cPilha = NULL;

    pilha = fopen("pilha.bin", "rb");
    if (pilha == NULL)
    {
        printf("Erro ao abrir arquivo para leitura.\n");
        return NULL;
    }

    fread(tPilha, sizeof(int), 1, pilha);

    cPilha = (Complexo *)malloc(sizeof(Complexo) * (*tPilha));
    for (int i = 0; i < (*tPilha); i++)
    {
        fread(&(cPilha[i].pReal), sizeof(float), 1, pilha);
        fread(&(cPilha[i].pImag), sizeof(float), 1, pilha);
    }
    fclose(pilha);
    return cPilha;
}

int main()
{
    Complexo *cPilha = NULL;
    Complexo umC;
    int tamPilha = 0;
    int choice;

    while (1)
    {
        printf("\nPerform operations on the stack:");
        printf("\n1.Push the element\n2.Pop the element\n3.Show last\n4.Verify\n5.Save File\n6.Restore stake\n7.EXIT");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            scanf("%f %f", &umC.pReal, &umC.pImag);
            empilhe(&cPilha, umC, &tamPilha);
            break;
        case 2:
            if (!pilhaVazia(tamPilha))
            {
                desempilhe(&cPilha, &tamPilha);
            }
            else
            {
                printf("Pilha vazia!\n");
            }
            break;
        case 3:
            if (!pilhaVazia(tamPilha))
            {
                Complexo top = topo(cPilha, tamPilha);
                printf("Topo da pilha: %.2f + %.2fi\n", top.pReal, top.pImag);
            }
            else
            {
                printf("Pilha vazia!\n");
            }
            break;
        case 4:
            if (pilhaVazia(tamPilha) == 1)
            {
                printf("A pilha esta vazia.\n");
            }
            else
            {
                printf("A pilha nao esta vazia.\n");
            }
            break;
        case 5:
            salvePilha(cPilha, tamPilha);
            break;
        case 6:
            if (!pilhaVazia(tamPilha))
            {
                Complexo *cPilha = recuperePilha(&tamPilha);
                for (int i = 0; i < tamPilha; i++)
                {
                    printf("%.2f + %.2fi\n", cPilha[i].pReal, cPilha[i].pImag);
                }
            }
            else
            {
                printf("Pilha vazia!\n");
            }
            break;
        case 7:
            exit(0);
        default:
            printf("\nOpcao invalida!!");
        }
    }
    free(cPilha);
    return 0;
}