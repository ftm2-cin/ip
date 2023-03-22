#include <stdio.h>
typedef struct
{
    char nome[110];
    float nota;
    int idade;
} Aluno;

void ordenar_notas(Aluno aluno[])
{
    for (int a = 0; a < 5; a++)
    {

        for (int b = 1; b < 5; b++)
        {

            if (aluno[b - 1].nota > aluno[b].nota)
            {
                float cache = aluno[b].nota;
                aluno[b].nota = aluno[b - 1].nota;
                aluno[b - 1].nota = cache;
            }
        }
    }
}
int main()
{
    Aluno alunos[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", alunos[i].nome);
        scanf("%f %d", &alunos[i].nota, &alunos[i].idade);
    }
    ordenar_notas(alunos);
    for (int i = 0; i < 5; i++)
    {
        printf("%s ", alunos[i].nome);
        printf("%.2f %d", alunos[i].nota, alunos[i].idade);
        printf("\n");
    }   
}