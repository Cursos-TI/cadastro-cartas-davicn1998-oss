#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //--- INFORMAÇÕES DA CARTA 1 ---
  char codigo_carta1[4];      // para guardar indentificação das cartas [A1]
  int populacao1;               // Numero de habitantes
  float area1;                  // Área em km²
  float pib1;                   // Produto interno bruto
  int pontos_turisticos1;       // quantidade de pontos turisticos
  float densidade_populacional1;  // mumeros da massa populacional
  float pib_per_capita1;         // valor real do pib em relação a população
  float super_poder1;           // ja deixar o super poder aqui para o final
  
  //--- INFORMAÇÕES CARTA 2 ---
  char codigo_carta2[4];      // para guardar indentificação das cartas [A2]
  int populacao2;               // Numero de habitantes
  float area2;                  // Área em km²
  float pib2;                   // Produto interno bruto
  int pontos_turisticos2;       // quantidade de pontos turisticos
  float densidade_populacional2;  // mumeros da massa populacional
  float pib_per_capita2;         // valor real do pib em relação a população
  float super_poder2;            // ja deixar o super poder aqui para o final

  // Área para entrada de dados carta 1
  printf("== Cadastro da carta 1 ==\n");
  printf("Digite o codigo da carta");
  scanf("%3s", codigo_carta1); // adcionado o numero 1

  printf("Digite a populacao da cidade:");
  scanf("%d", &populacao1); // adcionado o numero 1

  printf("Digite a area da cidade (em km²): ");
  scanf("%f", &area1); // adcionado o numero 1

  printf("Digite PIB da cidade: ");
  scanf("%f", &pib1); // adcionado o numero 1

  printf("Digite o numero de pontos turistico: ");
  scanf("%d", &pontos_turisticos1); // adcionado o numero 1

  //=== CÁLCULOS DA CARTA 1 ===
  densidade_populacional1 = (float)populacao1 / area1;
  pib_per_capita1 = pib1 / (float)populacao1; 

  // Super poder: soma de todas as propriedades fídicas e calculadas
  super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade_populacional1);
  // como menor densidade vence, o (1.0 / desindade) para que um valor menor de desindade aumente o super poder


  // Área para entrada de dados carta 2
  printf("== Cadastro da carta 2 ==\n");
  printf("Digite o codigo da carta");
  scanf("%3s", codigo_carta2); // adcionado o numero 2

  printf("Digite a populacao da cidade:");
  scanf("%d", &populacao2); // adcionado o numero 2

  printf("Digite a area da cidade (em km²): ");
  scanf("%f", &area2); // adcionado o numero 2

  printf("Digite PIB da cidade: ");
  scanf("%f", &pib2); // adcionado o numero 2

  printf("Digite o numero de pontos turistico: ");
  scanf("%d", &pontos_turisticos2); // adcionado o numero 2

  // === CALCULOS DA CARTA 2 ===
  densidade_populacional2 = (float)populacao2 / area2;
  pib_per_capita2 = pib2 / (float)populacao2;
  super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (1.0f / densidade_populacional2);

  // === EXIBIÇÃO DOS RESULTADOS E COMPARAÇÕES ===
    printf("\n====== RESULTADO DO DUELO ======\n");

    // População: Maior vence
    printf("População: Carta 1 possui %d vs Carta 2 possui %d -> ", populacao1, populacao2);
    if (populacao1 > populacao2) {
        printf("CARTA 1 (%s) VENCEU!\n", codigo_carta1);
    } else if (populacao2 > populacao1) {
        printf("CARTA 2 (%s) VENCEU!\n", codigo_carta2);
    } else {
        printf("EMPATE!\n");
    }

    // Densidade Populacional: MENOR VENCE
    printf("Densidade: Carta 1 possui %.2f vs Carta 2 possui %.2f -> ", densidade_populacional1, densidade_populacional2);
    if (densidade_populacional1 < densidade_populacional2) { // < significa menor vence
        printf("CARTA 1 (%s) VENCEU!\n", codigo_carta1);
    } else if (densidade_populacional2 < densidade_populacional1) {
        printf("CARTA 2 (%s) VENCEU!\n", codigo_carta2);
    } else {
        printf("EMPATE!\n");
    }

    // Super Poder: Maior vence
    printf("Super Poder: Carta 1 possui %.2f vs Carta 2 possui %.2f -> ", super_poder1, super_poder2);
    if (super_poder1 > super_poder2) {
        printf("CARTA 1 (%s) VENCEU!\n", codigo_carta1);
    } else if (super_poder2 > super_poder1) {
        printf("CARTA 2 (%s) VENCEU!\n", codigo_carta2);
    } else {
        printf("EMPATE!\n");
    }

 


  


return 0;
} 
