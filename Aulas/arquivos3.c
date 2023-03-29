#include <stdio.h>
#include <stdlib.h>

char *carregaPrograma(char *nomArq, int *tam) {
    FILE *prog;
    char *vet = NULL;
    if((prog=fopen(nomArq, "ab+"))!=NULL) {
        *tam = (int) ftell(prog);
        fseek(prog, 0, SEEK_SET);
        if((vet = (char *) malloc(*tam))==NULL) exit(1);
        fread(vet, sizeof(char), *tam, prog);
        fclose(prog);
    }
    return vet;
}

char *doREAD(char *vet, int *tam, int *pc) {
    int num;
    vet = (char *) realloc(vet, (*tam) + 1);
    scanf("%d", &num);
    vet[(*tam)++] = num;
    (*pc)++;
    return vet;
}

void doADD_ACC(char *vet, int *acum, int *pc) {
    *acum += vet[*pc+1]; *pc += 2;
}

void doJNZ(char *vet, int acum, int *pc) {
    if(acum >= 0) *pc = vet[*pc+1]; else *pc += 2;
}

char *doASG(char *vet, int *tam, int *pc) {
    if(vet[(*pc)+1] > (*tam) - 1) {
        if((vet = (char *) realloc(vet, vet[(*pc)+1]))==NULL) {
            printf("Problema de alocacao na funcao doASG\n"); exit(1);
        }
        *tam = vet[(*pc)+1];
    }
    vet[vet[(*pc)+1]] = vet[(*pc)+2];
    *pc += 3;
    return vet;
}

char *interpretador(char *vet, int *tam) {
    int pc = 0, acum = 0;
    while(vet[pc]!=10) { // Final do programa
        switch(vet[pc]) { // Comando da vez
            case 0: vet = doREAD(vet, tam, &pc); break;
            case 5: doADD_ACC(vet, &acum, &pc); break;
            case 8: doJNZ(vet, acum, &pc); break;
            case 9: vet = doASG(vet, tam, &pc); break;
        }
    }
    return vet;
}

int main() {
    char *vet = NULL;
    int tam = 0;
    vet = carregaPrograma("prog.bin", &tam);
    vet = interpretador(vet, &tam);
    free(vet);
    return 0;
}