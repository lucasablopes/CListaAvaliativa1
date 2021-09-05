#include <stdio.h>
#include <time.h>

// Objetivo: Ler o ano de nascimento de uma pessoa e calcular sua idade com prcisão e indicar se ela já tem idade para ser habilitada a dirigir;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 04/09/2021;
// Última atualização: 04/09/2021.

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{

  int anoNascimento, idade;
  char aniversario;

  // Definir ano atual

  time_t tempoAgora = time(NULL);
  struct tm * tempoAtual = localtime(&tempoAgora);
  int anoAtual = tempoAtual->tm_year + 1900;

  // Ler ano de nascimento

  printf("Digite o seu ano de nascimento: ");
  scanf("%d", &anoNascimento);

  // Verificar se já fez aniversário no ano

  idade = anoAtual - anoNascimento;

  limpar_entrada();

  printf("Você já fez aniversário esse ano (responda S para sim e N para não)? ");
  scanf("%c", &aniversario);

  while (aniversario != 'N' && aniversario != 'S') {
  limpar_entrada();
  printf("\nResposta inválida!\n");
    printf("Você já fez aniversário esse ano (responda S para sim e N para não)? ");
    scanf("%c", &aniversario);
  }

  if (aniversario == 'N' || aniversario == 'n') {
    idade = idade - 1;
  }
    
  // Checagem carteira de habilitação

  printf("\nVocê tem %d anos.\n", idade);

  if (idade >= 18) {
    printf("Você tem idade o suficiente para ser habilitado para dirigir no Brasil!");
  }
    
  return 0;
}