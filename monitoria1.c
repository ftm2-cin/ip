#include <stdio.h>

int main(){
    float num1, num2, soma, sub, mult, div;
    char operador;
    
    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);
    
    printf("Digite uma operacao: + - * /: \n");
    scanf(" %c", &operador);

    switch (operador)
    {
    case '+':
        soma = num1 + num2;
        printf("A soma desses numeros e %.0f\n", soma);
        break;
    case '-':
        sub = num1 - num2;
        printf("A subtracao desses dois numeros e %.0f\n", sub);
        break;
    case '*':
        mult = num1 * num2;
        printf("A multiplicacao desses dois numeros e %.0f\n", mult);
        break;
    case '/':
        div = num1 / num2;
        printf("A divisao desses dois numeros e %.0f\n", div);
        break;   
    default:
        printf("Voce nao escolheu uma opcao valida.");
        break;
    }
}