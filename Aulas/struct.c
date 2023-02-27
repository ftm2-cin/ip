#include <stdio.h>
//SE TROCAR POR UNION OCUPA MENOS BITES, SE IDENTIFICAR UM UNICO ELEMENTOS COMO DUAS MEDIDAS. EXEMPLO ÁGUA - LITROS E MILILITROS
struct Aluno
{
    char nome[50];
    float nota; 
};

int main()
{
    struct Aluno turma[70];
    for (int i = 0; i < 70; i++)
    {
        printf("Digite o nome do %do aluno", i + 1);
        scanf(" %49[^\n]", turma[i].nome);
        printf("Digite nota do %do aluno: ", i + 1);
        scanf("%f", &turma[i].nota);
    }
    return 0;
}