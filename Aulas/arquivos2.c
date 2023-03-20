#include <stdio.h>
#include <string.h>

void guardastr(char *str, FILE *arquivo){
    fprintf(arquivo, "%s\n", str);
}

int main() {
    FILE *arquivo;
    char str[50];
    scanf("%s", str);
    arquivo = fopen("nomes.txt", "w");
    while (strcmp(str, ".") != 0) {
        guardastr(str, arquivo);
        scanf("%s", str);
    }
    fclose(arquivo);
    return 0;
}