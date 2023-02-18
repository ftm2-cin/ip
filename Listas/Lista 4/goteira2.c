#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int recursive_function(int x, int y, char **matrix, int rows, int cols);

int main() {
    int rows, cols;
    scanf("%d", &rows);
    scanf("%d", &cols);

    char **matrix = (char **) malloc(rows * sizeof(char *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (char *) malloc(cols * sizeof(char));
        scanf("%s", matrix[i]);
    }

    int init = 0;
    for (int i = 0; i < cols; i++) {
        if (matrix[0][i] == 'o') {
            init = i;
            break;
        }
    }

    recursive_function(init, 1, matrix, rows, cols);

    for (int i = 0; i < rows; i++) {
        printf("%s\n", matrix[i]);
    }

    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}

int recursive_function(int x, int y, char **matrix, int rows, int cols) {
    if (y >= rows || x >= cols || x < 0 || matrix[y][x] == 'o') {
        return 1;
    }

    if (matrix[y][x] == '.') {
        matrix[y][x] = 'o';
    }

    if (y+1 != rows) {
        if (matrix[y+1][x] == '#') {
            return recursive_function(x+1, y, matrix, rows, cols) && recursive_function(x-1, y, matrix, rows, cols);
        } else {
            return recursive_function(x, y+1, matrix, rows, cols);
        }
    }

    return 1;
}