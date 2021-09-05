#include <stdio.h>

// Objetivo: Recolher dois números e imprimir o maior deles;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 04/09/2021;
// Última atualização: 04/09/2021.

int main(void) {

  int priNum, segNum, maiorNum;

  // Recolhimento de dados

  printf("Digite o primeiro número: ");
  scanf("%d", &priNum);
  
  printf("Digite o segundo número: ");
  scanf("%d", &segNum);

  // Definição do maior número

  if (segNum > priNum) {
    maiorNum = segNum;
  }
  else {
    maiorNum = priNum;
  }

  // Impressão do maior número

  printf("\nO maior número é %d", maiorNum);
  
  return 0;
}