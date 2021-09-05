#include <stdio.h>

// Objetivo: Avaliar a nota fornecida pelo usuário entre Ótima, Boa, Regular e Insatisfatória;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 04/09/2021;
// Última atualização: 04/09/2021.

int main(void) {

  double nota;

  // Leitura da nota

  printf("Digite sua nota: ");
  scanf("%lf", &nota);

  while (nota > 10 || nota < 0) {
    printf("\nNota inválida! Digite sua nota novamente: ");
    scanf("%lf", &nota);
  }

  // Avaliação da nota

  if (nota >= 8) {
    printf("\nÓtimo!");
  }
  else if (nota >=7 && nota < 8) {
    printf("\nBom!");
  }
  else if (nota >= 5 && nota < 7) {
    printf("\nRegular.");
  }
  else {
    printf("\nInsatisfatório.");
  }
  
  return 0;
}