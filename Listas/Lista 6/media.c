#include <stdio.h>
#include <math.h>

void calcular_media(int *A, int *B) {
    if (*A <= *B) {
        int cache = *A;
        *A = floor((*A + *B) / 2);
        *B = (cache + *B) % 2;
    } else {
        int cache = *B;
        *B = floor((*A + *B) / 2);
        *A = (*A + cache) % 2;
    }
    printf("A = %d\nB = %d", *A, *B);
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    calcular_media(&A, &B);
    return 0;
}