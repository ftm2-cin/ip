/* 
ESTRUTURA EM QUE ARMAZENA UMA CERTA QTD DE DADOS HOMOGENEOS E QUE PODE SER ASSOCIADA A N DIMENSÕES INDICADAS PELOS COLCHETES, VETOR DE VETORES
EXEMPLOS: LISTA COM NOME DE ALUNOS E MATRIZ BOOLEANA (1 E 0)

#COMO DECLARAR MATRIZES:
matriz[LINHAS][COLUNAS]
DECLARAR MATRIZ NULA:
matriz[][] = {};

#MATRIZES DE MEMORIA
AS MATRIZES SÃO ARMAZENADAS NA MEMÓRIA RAM DO COMPUTADOR MAS EM FORMA DE 0 OU 1(BINÁRIOS);

#ACESSAR VALORES NA MATRIZ

CADA ELEMENTO DA MATRIZ TEM SUA COORDENADA QUE É DADA PELA LINHA SEGUIDO PELA COLUNA.

É IGUAL A VETORES, OU SEJA A LINHA 1 DA MATRIZ TEM Q SER REFERENCIADA COMO 0 E A COLUNA 1 TAMBÉM COMO 0;
PARA ACESSAR CADA DIMENSÃO DA MATRIZ É CONSIDERADO UM FOR.
EXEMPLO:
for(int i = 0; i < QTD DE LINHAS; i++)
{
    for(int j = 0; j < QTD DE COLUNAS; j++)
    {
        printf("%c ", matriz[i][j]);
    }
    printf("\n");
}

*/

#include<stdio.h>

int main(){
    int n, m, pos_x, pos_y; //matriz NxM   pos_x e pos_y é onde o boneco está
    scanf("%d %d", &n, &m);
    char matriz[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf(" %c", &matriz[i][j]);
            if(matriz[i][j]=='o'){ // 'o' representa o bonequinho
                pos_x=i;
                pos_y=j;
            }
        }
    }

    char movimento; // w a s d
    int contador = 0;

    while(movimento!='r' && contador<=100){ //o jogo vai continuar rodando até você digitar 'r' como movimento ou fazer 100 jogadas
        printf("Escolha um movimento: ");
        scanf(" %c", &movimento);
        contador++;

        matriz[pos_x][pos_y] = '.'; // # representa a parede
        if((movimento=='w') && (matriz[pos_x-1][pos_y]!='#') && (pos_x-1>=0)) pos_x--;
        else if((movimento=='s') && (matriz[pos_x+1][pos_y]!='#') && (pos_x+1<n)) pos_x++;
        else if((movimento=='a') && (matriz[pos_x][pos_y-1]!='#') && (pos_y-1>=0)) pos_y--;
        else if((movimento=='d') && (matriz[pos_x][pos_y+1]!='#') && (pos_y+1<m)) pos_y++;
        matriz[pos_x][pos_y] = 'o';

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                printf("%c", matriz[i][j]);
            }
            printf("\n");
        }
    }
}