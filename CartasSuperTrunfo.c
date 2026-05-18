#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char codigo_carta[4];      // para guardar indentificação das cartas [A1]
  int populacao;               // Numero de habitantes
  float area;                  // Área em km²
  float pib;                   // Produto interno bruto
  int pontos_turisticos;       // quantidade de pontos turisticos
  
  // Área para entrada de dados
  printf("== Cadastro da carta 1 ==\n");
  printf("Digite o codigo da carta");
  scanf("%3s", codigo_carta); 

  printf("Digite a populacao da cidade:");
  scanf("%d", &populacao);

  printf("Digite a area da cidade (em km²): ");
  scanf("%f", &area);

  printf("Digite PIB da cidade: ");
  scanf("%f", &pib);

  printf("Digite o numero de pontos turistico: ");
  scanf("%d", &pontos_turisticos);

  printf("\n-------------------------------------\n");


  // Área para exibição dos dados da cidade
  // Exibe os dados cadastrados de forma clara e organizada, por linha.
  printf("Dados da cidade Cadastrada:\n");
  printf("Código de Carta: %s\n", codigo_carta);
  printf("Populacao: %d habitantes\n", populacao);
  printf("Área: %.2f\n", area);
  printf("PIB: %.2f\n", pib);
  printf("Pontos turisticos: %d\n", pontos_turisticos);


return 0;
} 
