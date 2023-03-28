#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* carregaPrograma(char *nomArq, int *tam){

    FILE*meuArq;
    char* vet = NULL;
    char i = NULL;

    if((meuArq = fopen(nomArq, "ab+")) != NULL)
    {   
        *tam = (int) ftell(meuArq);
        fseek(meuArq, 0, SEEK_SET);
        if((vet = (char*) malloc(*tam)) == NULL)
        {
            exit(1);
        } else
        fread(vet, sizeof(char), ftell(meuArq), meuArq);                
        fclose(meuArq);
    }
    return vet;
}
char* read(char* vet, int* tam, int* pc)
{
    vet = (char *) realloc(vet, (*tam)+1);
    (*tam)++;
    scanf("%d", &vet[*tam]);
    (*pc)++;
}
void write(char* vet, int* pc)
{
    printf("%c", vet[vet[(*pc)+1]]);
}
void assign(char* vet, int* tam, int* pc)
{
    if(vet[(*pc)+1] > (*tam) - 1)
    {
        if((vet = (char *) realloc(vet, vet[(*pc)+1])) == NULL)
        {
            exit(1);
        } else *tam = vet[(*pc)+1];
    }
    vet[vet[(*pc)+1]] = vet[(*pc)+2];
    *pc+= 3;
}
char* interpretador (char* vet, int* tam)
{
    int pc = 0; 
    int acum = 0;

    while(vet[pc]!=10) // Final do programa
    {
        switch(vet[pc])
        {
            case 0: vet = read(vet, &tam, &pc); break;
            case 1: write(vet, &pc); break;
            case 5: acum += vet[pc+1]; break;
            case 6: acum = vet[pc+1] - acum; break;
            case 7: acum -= vet[pc+1]; break;
            case 8: if(acum>=0) pc = vet[pc+1]; break;
            case 9: assign(vet, &tam, &pc); break;
        }
    }

}


int main()
{

    char* vet = NULL;
    int tam = 0;

    vet = carregaPrograma("prog.bin", &tam);

    vet = interpretador(vet, &tam);

    free(vet);

    return 0;
}