#include <stdio.h>


// Objetivo: Ler dois coeficientes de uma equação de primeiro grau e resolvê-la;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 05/09/2021;
// Última atualização: 05/09/2021.

int main(void) {
  
  double x, a, b;

  // Ler os coeficientes

  printf("Dada a equação de primeiro grau ax-b=0, faça: \n");

  printf("Digite o coeficiente a: ");
  scanf("%lf", &a);

  printf("Digite o coeficiente b: ");
  scanf("%lf", &b);

  // Resolver a equação

  x = -b/a;

  // Imprimir resultado na tela

  printf("\nx é igual a %.2lf", x);

  return 0;
}