#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    int ponturist1, populacao1, populacao2, ponturist2;
    float area1, area2, pib1, pib2;
    char est1, est2, est3, est4, est5, est6, est7, est8;
    char cidade1[20], cidade2[20], codigocarta1[5], codigocarta2[5], codigocarta3[5];
  // Área para entrada de dados

  // Área para exibição dos dados da cidade
 printf("****CARTAS SUPER TRUNFO - PAISES****\n");
 printf("\n");

 printf("Digite os dados da primeira Carta:\n");
 printf("\n");

 printf("Estado: \n");
 scanf("  %c", &est1);

 printf("Codigo: \n");
 scanf("%s", codigocarta1);

 printf("Nome da Cidade: \n");
 scanf(" %[^\n]",cidade1);

 printf("População: \n");
 scanf("%d", &populacao1);

 printf("Área: \n");
 scanf("%f", &area1);

 printf("PIB: \n");
 scanf("%f", &pib1);

 printf("Numero de pontos turisticos: \n");
 scanf("%d", &ponturist1);
 printf("\n\n");


printf("Digite os dados da segunda Carta:\n");
 printf("\n");

 printf("Estado: \n");
 scanf("  %c", &est2);

 printf("Codigo: \n");
 scanf("%s", codigocarta2);

 printf("Nome da Cidade: \n");
 scanf(" %[^\n]",cidade2);

 printf("População: \n");
 scanf("%d", &populacao2);

 printf("Área: \n");
 scanf("%f", &area2);

 printf("PIB: \n");
 scanf("%f", &pib2);

 printf("Numero de pontos turisticos: \n");
 scanf("%d", &ponturist2);
 printf("\n\n");

 printf("Carta 1\n");
 printf("Estado: %c \n", est1);
 printf("Codigo: %s \n", codigocarta1);
 printf("Nome da Cidade: %s \n", cidade1);
 printf("População: %d \n", populacao1);
 printf("Area: %.2f Km² \n", area1);
 printf("PIB: %.2f Bilhoes de reais \n", pib1);
 printf("Numero de pontos turisticos: %d \n", ponturist1);
 printf("\n\n");

 printf("Carta 2\n");
 printf("Estado: %c \n", est2);
 printf("Codigo: %s \n", codigocarta2);
 printf("Nome da Cidade: %s \n", cidade2);
 printf("População: %d \n", populacao2);
 printf("Area: %.2f Km² \n", area2);
 printf("PIB: %.2f Bilhoes de reais \n", pib2);
 printf("Numero de pontos turisticos: %d \n", ponturist2);
 printf("\n\n");
 
return 0;
} 
