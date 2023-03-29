#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    float pReal;
    float pImag;
}Complexo;

void empilhe(Complexo **cPilha, Complexo umC, int *tPilha){
    Complexo *temp = (Complexo *)realloc(*cPilha, (*tPilha + 1) * sizeof(Complexo));
    if (temp == NULL)
    {
        free(*cPilha);
        exit(1);
    }
    *cPilha = temp;
    (*cPilha)[*tPilha].pReal = umC.pReal;
    (*cPilha)[*tPilha].pImag = umC.pImag;
    *tPilha++;
}

Complexo desempilhe(Complexo **cPilha, int *tPilha){
    Complexo copia = *cPilha[*tPilha];
    *cPilha = (Complexo *)realloc(*cPilha, (*tPilha - 1) * sizeof(Complexo));
    if (*cPilha == NULL)
    {
        free(*cPilha);
        exit(1);
    }
    *tPilha--;
    return copia;
}

Complexo topo(Complexo *cPilha, int tPilha){

}

int pilhaVazia(Complexo *cPilha, int tPilha){

}

int main(){
    Complexo *cPilha = NULL;
    Complexo umC;
    int tamPilha = 0;
    int choice;

    while (1)
    {
        printf("\nPerform operations on the stack:");
        printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            scanf("%f %f", &umC.pReal, &umC.pImag);
            empilhe(&cPilha, umC, &tamPilha);
            break;
        case 2:
            desempilhe(&cPilha, &tamPilha);
            break;
        case 3:
            topo();
            break;
        case 4:
            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    }
}