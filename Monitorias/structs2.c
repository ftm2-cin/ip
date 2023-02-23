typedef struct{
  int peso;
  int idade;
  char especie[30];
}animal;

typedef struct{
  int idade;
  char nome[30];
}funcionario;

typedef struct{
  animal animais[30];
  funcionario funcionarios[30];
  int qtd_animais;
  int qtd_funcionarios;

}zoo;

#include <stdio.h>

int main() {
    zoo recife;
    printf("Digite a qtd de funcionarios e de animais, nessa ordem:\n");
    scanf("%d%d", &recife.qtd_funcionarios, &recife.qtd_animais);

  printf("\nDigite as informacoes dos animais:\n");
    for(int i=0; i<recife.qtd_animais; i++){
      scanf("%d%d %s", &recife.animais[i].peso, &recife.animais[i].idade, recife.animais[i].especie);

      printf("\nAnimal %d:\nEspecie:%s\nPeso:%d\nIdade:%d\n", i+1, recife.animais[i].especie,recife.animais[i].peso, recife.animais[i].idade);
    }

    printf("\nDigite as informacoes dos funcionarios:\n");

    for(int i=0; i<recife.qtd_funcionarios; i++){
      scanf("%d %s", &recife.funcionarios[i].idade, recife.funcionarios[i].nome);

      printf("\nFuncionaria %s:\nIdade:%d\n", recife.funcionarios[i].nome, recife.funcionarios[i].idade);
    }
  
    return 0;
}