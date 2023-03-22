#include <stdio.h>

int possibilidades(int jogadas, int distancia) {
    if (jogadas == 0) {
        return (distancia <= 0) ? 1 : 0;
    }

    int total = 0;
    for (int i = 1; i <= 6; i++) {
        total += possibilidades(jogadas - 1, distancia - i);
    }

    return total;
}

int main() {
    int jogadas, distancia;
    scanf("%d %d", &jogadas, &distancia);

    int resultado = possibilidades(jogadas, distancia);
    printf("%d\n", resultado);

    return 0;
}