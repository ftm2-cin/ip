/*
#MALLOC
ponteiro = (*tipo)malloc(size);

ALOCA UM BLOCO DE MEMORIA DE TAMANHO SIZE
RETORNA O ENDEREÇO DO PRIMEIRO BYTE DESSE BLOCO DE MEMORIA COMO UM PONTEIRO DO TIPO VOID

-sizeof(tipo)
RETORNA O NÚMERO DE BYTES DESSE TIPO

-MALLOC COM PONTEIROS DUPLOS
int main(){
    char ** doublePont = NULL;
    doublePont = (char**)malloc(10 * sizeof(char*));

    for(int i = 0; i < 10; i++){
        doublePont[i] = (char*)malloc(10* sizeof(char));
    }

    //DAR FREE
    return 0;
}

#CALLOC
ponteiro = (tipo *) calloc(n, size);
A UNICA DIFERENÇA ENTRE CALLOC E MALLOC É QUE ELE INICIA TUDO ZERA E A MULTIPLICAÇÃO É UMA PARAMETRO DA FUNÇÃO

#REALLOC

ponteiro_1 = (tipo *)realloc(ponteiro_2, size);
REALOCA UM BLOCO DE MEMORIA DE MEMÓRIA DE TAMANHO SIZE, COPIANDO OS ELEMENTOS APONTADOS POR ponteiro_2;







*/