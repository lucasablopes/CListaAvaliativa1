#include <stdio.h>
#include <math.h>

// Objetivo: Dada a diária do hotel, imprimir o valor da diária promoncional, o valor arrecadado com diárias promoncionais, o valor arrecadado sem diárias promoncionais e a diferença entre os últimos;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 04/09/2021;
// Última atualização: 04/09/2021.

int main(void) {
  
  double diariaN, diariaP, VArrecadadoN, VArrecadadoP, diferença, aptos;

  // Número de apartamentos
  
  aptos = 75;

  // Leitura da diária normal

  printf("Digite o valor da diária sem descontos: ");
  scanf("%lf", &diariaN);

  // Valor da diária promoncional

  diariaP = diariaN * 3/4;
  printf("\nO valor da diária promocional é %.2lf", diariaP);

  // Valor arrecadado com as diárias promoncionais (80% de ocupação)

  VArrecadadoP = diariaP * (aptos * 4/5);
  printf("\nO valor arrecadado com a diária promocional é %.2lf", VArrecadadoP);

  // Valor arrecadado com as diárias normais (50% de ocupação)

  VArrecadadoN = diariaN * (aptos * 1/2);
  printf("\nO valor arrecadado com a diária normal é %.2lf", VArrecadadoN);

  // Diferença nos valores arrecadados

  diferença = fabs(VArrecadadoP - VArrecadadoN);
  printf("\nA diferença entre os valores arrecadados com as duas diárias é %.2lf", diferença);

  return 0;
}