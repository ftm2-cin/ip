#include <stdio.h>
#include <string.h>

int main() {
    int tam, tpalin, i, j, p, tam2 = 0, stop = 0, igual = 0, linhas = -1, colunas = -1;
    scanf("%d", &tam);
    scanf("%d", &tpalin);

    char matriz[tam][tam + 1], palin[tpalin + 1];

    for (i = 0; i < tam; i++) {
        scanf("%s", matriz[i]);
    }

    for (i = 0; i < tam && stop != 1; i++) {
        for (j = 0; j <= tam - tpalin && stop != 1; j++) {
            tam2 = tpalin + j;
            igual = 0;
            for (p = 0; p < tpalin; p++) {
                palin[p] = matriz[i][tam2 - 1];
                tam2--;
            }
            palin[p] = '\0';
            for (int c = 0; c < tpalin; c++) {
                if (palin[c] == matriz[i][c + j]) {
                    igual++;
                }
            }
            if (igual == tpalin) {
                linhas = i;
                colunas = j;
                stop = 1;
            }
        }
    }

    if (stop == 0) {
        for (j = 0; j < tam && stop != 1; j++) {
            for (i = 0; i <= tam - tpalin && stop != 1; i++) {
                tam2 = tpalin + i;
                igual = 0;
                for (p = 0; p < tpalin; p++) {
                    palin[p] = matriz[tam2 - 1][j];
                    tam2--;
                }
                palin[p] = '\0';
                for (int c = 0; c < tpalin; c++) {
                    if (palin[c] == matriz[c + i][j]) {
                        igual++;
                    }
                }
                if (igual == tpalin) {
                    linhas = i;
                    colunas = j;
                    stop = 1;
                }
            }
        }
    }

    printf("(%d, %d)", linhas, colunas);
    return 0;
}
