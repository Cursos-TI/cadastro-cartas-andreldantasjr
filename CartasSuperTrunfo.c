#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Variáveis da carta1:
  char estado;
  char codigodacarta[50];
  char nomedacidade[100];
  int populacao;
  float area;
  float PIB;
  int numerodepontosturisticos;

  //Variáveis da carta2:
  char estado2;
  char codigodacarta2[50];
  char nomedacidade2[100];
  int populacao2;
  float area2;
  float PIB2;
  int numerodepontosturisticos2;

  // Área para entrada de dados
  // Dados da carta01:
  printf("Criando a carta 1:\n");

  printf("Digite uma letra de A a H representando o estado escolhido: ");
  scanf("%c", &estado);

  printf("A letra escolhida seguida de um numero de 01 a 04: ");
  scanf("%s", codigodacarta);

  printf("Nome da cidade: ");
  scanf("%s", nomedacidade);

  printf("População: ");
  scanf("%d", &populacao);

  printf("Área em km²: ");
  scanf("%f", &area);

  printf("PIB: ");
  scanf("%f", &PIB);

  printf("Número de pontos turísticos: ");
  scanf("%i", &numerodepontosturisticos);

  // Dados da carta02:
  printf("Criando a carta 2: \n");

  printf("Digite uma letra de A a H representando o estado escolhido: ");
  scanf(" %c", &estado2);

  printf("A letra escolhida seguida de um numero de 01 a 04: ");
  scanf("%s", codigodacarta2);

  printf("Nome da cidade: ");
  scanf("%s", nomedacidade2);

  printf("População: ");
  scanf("%d", &populacao2);

  printf("Área em km²: ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &PIB2);

  printf("Número de pontos turísticos: ");
  scanf("%i", &numerodepontosturisticos2);


  // Área para exibição dos dados da cidade
  // Exibição de dados da carta01:
  printf("Carta 01: \n");
  printf("Estado: %c \n", estado);
  printf("Código da Carta: %s \n", codigodacarta);
  printf("Nome da Cidade: %s \n", nomedacidade);
  printf("População: %d \n", populacao);
  printf("Área em km²: %.2f km² \n", area);
  printf("PIB: %.2f Bilhões de Reais \n", PIB);
  printf("Números de Pontos Turísticos: %i \n", numerodepontosturisticos);

  //Exibição de dados da carta02:
  printf("Carta 02: \n");
  printf("Estado: %c \n", estado2);
  printf("Código da Carta: %s \n", codigodacarta2);
  printf("Nome da Cidade: %s \n", nomedacidade2);
  printf("População: %d \n", populacao2);
  printf("Área em km²: %.2f km² \n", area2);
  printf("PIB: %.2f Bilhões de Reais \n", PIB2);
  printf("Números de Pontos Turísticos: %i \n", numerodepontosturisticos2);

return 0;
}
