#include <stdio.h>

int tamstr(char* str) {
    char* p = str;
    while (*p != '\0') {
        p++;
    }
    return p - str;
}

int main() {
    char str[11];
    scanf("%s", str);
    while (strcmp(str, "FIM") != 0) {
        printf("%d\n", tamstr(str));
        scanf("%s", str);
    }
    return 0;
}