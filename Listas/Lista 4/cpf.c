#include <stdio.h>
#include <string.h>

int main() {
    int vezes = 0, num;
    char cache, nomes[20][11], cpf[20][12], senha[20][11], temp[53], final[20][53] = {};
    scanf("%d", &vezes);
    //LEITURA DE STRINGS
    for (int i = 0; i < vezes; i++) {
        scanf("%s %s", nomes[i], cpf[i]);
    //BONXAI
        for (int j = 0; j < strlen(nomes[i]); j++) {
            num = cpf[i][j] - '0';
            cache = nomes[i][j];

            if ((int)cache + num <= 127) {
                senha[i][j] = cache + num;
            } else {
                senha[i][j] = (cache - 26) + num;
            }

            if (senha[i][j] > 122) {
                senha[i][j] = senha[i][j] - 26;
            }
        }//\0 no final
        senha[i][strlen(nomes[i])] = '\0';
        //CONCATENAR VARIAS STRINGS
        snprintf(final[i], 53, "%s %s%c%c", nomes[i], senha[i], cpf[i][9], cpf[i][10]);
    }
    //ORDENAMENTO DE MATRIZ EM ORDEM ALFABÉTICA
    for (int i = 0; i < vezes - 1; i++) {
        for (int j = 0; j < vezes - i - 1; j++) {
            if (strcmp(final[j], final[j + 1]) > 0) {
                strcpy(temp, final[j]);
                strcpy(final[j], final[j + 1]);
                strcpy(final[j + 1], temp);
            }
        }
    }
    //PRINT STRING FINAL
    for (int i = 0; i < vezes; i++) 
    {
        printf("%s\n", final[i]);
    }
    return 0;
}