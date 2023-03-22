#include <stdio.h>

void mmm(int lista[20], int *menor, int *maior, float *media){
    for (int i = 0; i < 20; i++) {
        if (lista[i] < *menor) {
            *menor = lista[i];
        }
        if (lista[i] > *maior) {
            *maior = lista[i];
        }
    }
    *media = (*maior + *menor) / 2.0;
}

int main(){
    int lista[20], menor = 0, maior = 0;
    float media = 0;
    for (int i = 0; i < 20; i++) {
        scanf("%d", &lista[i]);
    }
    mmm(lista, &menor, &maior, &media);
    printf("%d %d\n%.1f\n", maior, menor, media);
    return 0;
}
