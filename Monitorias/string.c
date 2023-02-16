/*
STRINGS

#CONCEITOS
- ARRAY DE CARACTERES
- ARMAZENADOS LINEARMENTE NA MEMÓRIA
- TAMANHO FIXO

#DECLARAR STRING
char nome [7] = "cleytu"
A STRING SEMPRE VAI TER O TAMANHO DA PALAVRA + 1 POR CAUSA DO CACTERE NULO;

#SCANF DE STRINGS

scanf(" %s", STRING);
scanf(" %x[^\n]", STRING);
fgets("string", TAMANHO MAXIMO ATE LER - MENOS \n, stdin)

#STRING.H BIBLIOTECA

&& strcpy
- COPIA UMA STRING EM OUTRA
- RECEBE COMO PARAMETRO (STRING DE DESTINO, STRING DE ORIGEM);

&& strcmp
- COMPARA DUAS STRINGS E RETORNA UM INTEIRO QUE REPRESENTA A PRIMEIRA DIFERENÇA
- retorno 0 = STRINGS IGUAIS
- retorno < 0 = PRIMEIRA MAIOR Q A SEGUNDA
- retorno > 0 = SEGUNDA MAIOR QUE A PRIMEIRA
- EXEMPLO:
strcmp(string1, string2);

&& strlen
- RETORNA O TAMANHO DA STRING SEM O \0;

&& strcat
- SERVE PARA CONCATENAR STRINGS
strcat(string1, " ");
strcat(string1, string2);

&& sprintf
- GUARDA EM UMA VARIAVEL UMA FRASE COM 1 OU MIAS STRING
- EXEMPLO
sprintf(frase, "%s tem (tinha pq faleceu) %d anos", string1, inteiro)
printf("%s", frase);

*/


#include <stdio.h>
#include <string.h>

int main() {

    char str[21];
    char strAuxiliar[21];
    char string_busca[101];

    int auxiliarControle = 0, achei = 0;

    while(scanf(" %s", str) != EOF) {
        scanf(" %s", string_busca);

        for (int i = 0; i < strlen(string_busca); i++) {
            for (int j = i; j < strlen(str) + i; j++) {
                strAuxiliar[auxiliarControle] = string_busca[j];
                auxiliarControle++;
            }

            strAuxiliar[strlen(str)] = '\0';

            if(!strcmp(strAuxiliar, str)) achei = 1;
            auxiliarControle = 0;
            
        }

        if (achei) printf("achei\n");
        else printf("nao achei\n");
        achei = 0;
    }

    return 0;
}