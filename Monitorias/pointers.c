/*
#PONTEIRO SIMPLES
SÃO VARIAVEIS QUE COBNSEGUEM ARMAZENAR O ENDERECO DE MEMORIA DE OUTRA VARIAVEL

tiṕo *nome = NULL;

-2 USOS COMUNS
RECEBER O ENDEREÇO DE OUTRA VARIAVEL
ALOCAÇÃO DINAMICA

-EXEMPLO

int main()
{
    char *pont = NULL;
    char var = 'a';
    printf("%c", var); //OUTPUT: 'a';

    pont = &var;
}

#PONTEIROPS DUPLOS
SÃO VARIAVEIS QUE ARMAZENAM O ENDEREÇO DE MEMORIA DE OUTRO PONTEIRO.

tipo **nome = NULL;

-2 USOS COMUNS
SOFRER ALOCAÇÃO DE MEMORIA COMO MATRIZ
SER PARAMETRO DE UMA FUNÇÃO PARA RECEBER O ENDEREÇO DE UM PONTEIROS SIMPLES


-EXEMPLO

int main()
{
    char ** doublePont = NULL;
    char * pont = NULL;
    char var = 'a';

    pont = &var;
    doublePont = &pont;
    **doublePont = 'd';
    printf(" %c", var);

    return 0;
}

#STRUCT COM PONTEIROS
-PONTEIRO DENTRO DE UMA STRUCT
typedef struct{
    int *pont;
}ex;

int main(){
    int num = 5;
    ex exemplo;
    exemplo.pont = &num;
    printf("%d", *(exemplo.pont))
}

#FUNCAO COM PONTEIROS

void change(int* pont){
    *pont = 10;
}

int main(){
    int num = 5;
    change(&num);
    printf("%d", num);
}


*/