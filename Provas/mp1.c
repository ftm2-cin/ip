#include <stdio.h>
#include <math.h>

int main() 
{
    //DECLARAÇÃO DE VARIAVEIS
    int alunos, provas, notas, cont = 1, aprovados = 0;
    float somaaluno = 0, mediaaluno = 0, somatotal = 0, mediatotal = 0, cache = 0;
    
    //SCAN DAS VARIAVEIS
    scanf("%d %d %d", &alunos, &provas, &notas);

    //CALCULO TAMANHO VETOR PRINCIPAL
    int tamvetor = alunos * provas;

    //DECLARAÇÃO DOS VETORES
    float vetornota[tamvetor], vetormedia[alunos];

    // SCAN DO VETOR COM TODAS AS NOTAS
    for (int i = 0; i < tamvetor; i++)
    {
        scanf("%f", &vetornota[i]);
    }

    //CRIAÇÃO DO VETOR COM A MEDIA DOS ALUNOS
    for (int i = 0; i < tamvetor; i++)
    {
        somaaluno = somaaluno + vetornota[i];
        if (i == (cont * provas) - 1)
        {
            mediaaluno = somaaluno / provas;
            vetormedia[cont - 1] = mediaaluno;
            mediaaluno = 0;
            somaaluno = 0;
            cont++;
        }
    }

    //DESCOBRINDO A MEDIA TOTAL DA TURMA
    for (int i = 0; i < alunos; i++)
    {
        somatotal = somatotal + vetormedia[i];
    }
    mediatotal = somatotal / alunos;

    //ORDENAÇÃO DO VETOR DAS MEDIAS
    for (int a = 0; a < alunos; a++)
    {

        for (int b = 1; b < alunos; b++)
        {

            if (vetormedia[b - 1] > vetormedia[b])
            {
                cache = vetormedia[b];
                vetormedia[b] = vetormedia[b - 1];
                vetormedia[b - 1] = cache;
            }
        }
    }

    //CONTAGEM DE ALUNOS ACIMA DA MÉDIA
    for (int i = 0; i < alunos; i++)
    {
        if (vetormedia[i] >= 7)
        {
            aprovados++;
        }
    }
    
    //SAIDA
    printf("%.1f\n", mediatotal);
    for (int i = alunos - 1; i >=  alunos - notas; i--)
    {
        printf("%.1f ", vetormedia[i]);
    }
    printf("\n");
    for (int i = 0; i < notas; i++)
    {
        printf("%.1f ", vetormedia[i]);
    }
    printf("\n");
    printf("%d\n", aprovados);
    printf("%d\n", alunos - aprovados);
	return 0;
}