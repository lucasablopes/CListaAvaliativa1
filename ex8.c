#include <stdio.h>

// Objetivo: Ler um caso de faixa de salário e dar o devido aumento para cada caso;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 05/09/2021;
// Última atualização: 05/09/2021.

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main(void) {

  char caso;
  double salI, salF;

  // Leitura dos dados

  printf("Digite o seu salário: ");
  scanf("%lf", &salI);

  limpar_entrada();

  printf("Digite o seu caso (A, B ou C): ");
  scanf("%c", &caso);

  while (caso != 'A' && caso != 'B' && caso != 'C') {
  limpar_entrada();
    printf("\nResposta inválida!\n");
    printf("Digite o caso novamente: ");
    scanf("%c", &caso);
  }

  // Avaliação dos casos

  switch (caso) {
    case 'A': 
      salF = salI * 1.08;
    break;
    case 'B': 
      salF = salI *1.11;
    break;
    case 'C':
      if (salI <= 1000) {
        salF = salI + 350;
      }
      else {
        salF = salI + 200;
      }
    break;
  }

  // Impressão do salário final

  printf("\nO salário final é %.2lf reais.", salF);
  
  return 0;
}