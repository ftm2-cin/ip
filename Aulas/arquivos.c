#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
ARQUIVO É UM VETOR DE BYTES
'w' cria um arquivo e adicona conteudo nele.
'r' ler o arquivo desejado
'a' acresenta a um arquivo existente uma escrita
fseek() VAI PARA UMA DETERMINA POSIÇÃO DO ARQUIVO
fclose() DAR FREE NO ARQUIVO
fprintf() ADICONA NO ARQUIBO UM printf
fopen() ABRE O ARQUIVO
'w+' escreve e ler o arquivo
'r+' ler e adicona ao arquivo  
 */


int main()
{
    FILE *arquivo;
    char linha[100];
    if ((arquivo = fopen("arq.txt", "r")) != NULL)
    {
        // fprintf(arquivo, "Forca, Estamos chegando ao fim!\n");
        // printf("Arquivo criado com sucesso\n");
        while (fgets(linha, 98, arquivo) != NULL)
        {
            printf("%s", linha);
        }
        fclose(arquivo);
    }
    else
        printf("DEU PAU");
}