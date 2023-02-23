#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[110];
    int idade;
    float altura; 
}pessoa;

int main(){

    int N;
    scanf("%d", &N);

    pessoa anyone[N];
    
    for (int i = 0; i < N; i++){
        scanf(" %s", anyone[i].nome);
        scanf("%d", &anyone[i].idade);
        scanf("%f", &anyone[i].altura);

        printf("\n\n%s\n%d\n%.2f\n", anyone[i].nome, anyone[i].idade, anyone[i].altura);
    }   

    return 0;
}

