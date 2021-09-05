#include <stdio.h>

// Objetivo: Verificar se o motorista respeitou as leis de velocidade e, caso não, calcular e imprimir o valor da multa;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 05/09/2021;
// Última atualização: 05/09/2021.

int main(void) {
  
  int velo, limitevelo, diferençavelo;

  // Leitura de dados

  printf("Qual é o limite de velocidade? ");
  scanf("%d", &limitevelo);
  
  printf("Qual foi a velocidade do motorista? ");
  scanf("%d", &velo);

  // Avaliação do motorista

  diferençavelo = velo - limitevelo;

  // Impressão do resultado

  if (diferençavelo <= 0) {
    printf("\nMotorista respeitou a lei.");
  }
  else {
    if (diferençavelo <= 10) {
      printf("\nMulta = R$50.00");
    }
    else if (diferençavelo <= 30) {
      printf("\nMulta = R$100.00");
    }
    else if (diferençavelo > 30) {
      printf("\nMulta = R$200.00");
    }
  }

  return 0;
}