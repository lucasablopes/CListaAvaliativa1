#include <stdio.h>

// Objetivo: Ler um símbolo do teclado e organizá-lo entre maior, menor, igual ou outro;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 05/09/2021;
// Última atualização: 05/09/2021.

int main(void) {

  char  simbolo;

  // Leitura do símbolo

  printf("Digite um sinal: ");
  scanf("%c", &simbolo);

  // Identificação e impressão do tipo do símbol
  
  switch (simbolo) {
    case '>':
      printf("\nSINAL DE MAIOR");
    break;
    case '<':
      printf("\nSINAL DE MENOR");
    break;
    case '=':
      printf("\nSINAL DE IGUAL");
    break;
    default:
      printf("\nOUTRO SINAL");
    break;
  }

  return 0;
}