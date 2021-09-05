#include <stdio.h>

// Objetivo: Ler dois números inteiros e fazer sua adição, se adição < 10, soma-se 7, caso contrário, soma-se 5;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 04/09/2021;
// Última atualização: 04/09/2021.

int main(void) {

  int priNum, segNum, adiNum, adiNumRF;

  // Recolhimento de dados

  printf("Digite o primeiro número: ");
  scanf("%d", &priNum);
  
  printf("Digite o segundo número: ");
  scanf("%d", &segNum);
  
  // Definição da soma

  adiNum = priNum + segNum;

  if (adiNum < 10) {
    adiNumRF = adiNum + 7;
  }
  else {
    adiNumRF = adiNum + 5;
  }

  // Impressão do resultado final

  printf("\nO resultado final é %d", adiNumRF);  
  
  return 0;
}