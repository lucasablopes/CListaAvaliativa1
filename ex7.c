#include <stdio.h>
#include <math.h>

// Objetivo: Imprimir uma incógnita y=f(x) a partir do valor da variável livre x;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 05/09/2021;
// Última atualização: 05/09/2021.

int main(void) {
  
  double x, y;

  // Recolhimento da variável

  printf("Digite a váriavel x: ");
  scanf("%lf", &x);

  // Avaliação da função

  if (x<=1) {
    y = 1;
  }
  else if (x>1 && x<=2) {
    y = 2;
  }
  else if (x>2 && x<=3) {
    y = pow(x,2);
  }
  else if (x>3) {
    y = pow(x,3);
  }

  // Impressão do resultado

  printf("\nf(x) = %.2lf", y);

  return 0;
}