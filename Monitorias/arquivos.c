/*
O QUE É UM ARQUIVO?
é uma sequencia de bytes, coleção de dados armazenada em uma memória externa.

PORQUE USAR ARQUIVOS?
-armazenamento permanente

COMO ABRIR UM ARQUIVIO?
#include <stdio.h>
int main(){
    FILE *arq;
    arq = fopen("nome.tipo", "modo");

    if(arq == 1)
        exit(1);
}

TIPOS DE ARQUIVO?
txt, bin.

MODOS TXT:

"r"
-ABRE UM ARQUIVO JÁ EXISTENTE APENAS PARA LEITURA
OBS:"r+" LER E SOBRESCREVE OQ TEM LÁ

"w"
-ABRE UM ARQUIVO EXISTENTE PARA ESCRITA
OBS: "w+" ABRE UM ARQUIVO EXISTENTE PARA ESCREVER E DEPOIS LER

"a"
-ABRE UM ARQUIVO JA EXISTENTE PARA ADICIONAR DADOS
OBS:"a+" ABRE UM ARQUIVO EXISTENTE PARA LEITURA E ADICIONAR DADOS

MODOS BIN:
BINÁRIO É A MESMA COISA PORÉM É PRECISO ADICIONAR UM "b" no final.

ARQUIVOS NÃO EXISTE
VOCE CRIA USANDO "w", "w+", "a+"

ARQUIVO JA EXISTE
VOCE USA "r", "r+", "a+"

FUNÇÕES TXT
fscanf(arq, "%d %s", &num, nome);

fgets(string, strlen(string) + 1, arq);

letra = fgetc(arq);

fprintf(arq, "%d %s", num, nome);

fputs(string, arq);

fputc(letra, arq);

FUNÇÕES BIN

fread(&idade, sizeof(int),1, arq);

fwrite(nome, sizeof(char), strlen(nome), arq);

FUNÇÕES UTEIS

remove("nome");

rename("antigo", "novo");

fseek(arq, num_bytes, inicio);
SEEK_SET para p início do arquivo
SEEK_CUR para posição atual do ponteiro
SEEK_END para fim do arquivo;.

*/



#include <stdio.h>
#include <string.h>

int main(){
    char nome_arq[30];
    scanf(" %s", nome_arq);
    strcat(nome_arq, ".txt");
    FILE* arq = fopen(nome_arq, "r");
    
    
    return 0;
}