#include <stdio.h>

//printf("Desafio Super Trunfo - Países");
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1[30], estado2[30];
    char codigo1[10], codigo2[10];
    char cidade1[30], cidade2[30];
    unsigned long int populacao1, populacao2;
    int  pontos1, pontos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, percapita1, percapita2;
    
    // Cadastro das Cartas:
    printf("=== Ben-vindo no Cadastro das Cartas Super Triunfo ===\n");
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    //cadastro da primeira carta
  printf("Carta 1 \n");
  printf("Digite o Estado: ");
  scanf("%s", estado1);
  printf("Digite o Codigo: ");
  scanf("%s", codigo1);
  printf("Digite o Nome da Cidade: ");
  scanf("%s", cidade1);
  printf("Digite o Numero da População: ");
  scanf("%lu", &populacao1);
  printf("Digite a Area: ");
  scanf("%f", &area1);
  printf("Digite o PIB: ");
  scanf("%f", &pib1);
  printf("Digite o Numero de Pontos Turisticos: ");
  scanf("%d", &pontos1);

  //Cadastro da segunda carta
  printf("\n Carta 2 \n");
  printf("Digite o Estado: ");
  scanf("%s", estado2);
  printf("Digite o Codigo: ");
  scanf("%s", codigo2);
  printf("Digite o Nome da Cidade: ");
  scanf("%s", cidade2);
  printf("Digite o Numero da População: ");
  scanf("%lu", &populacao2);
  printf("Digite a Area: ");
  scanf("%f", &area2);
  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  printf("Digite o Numero de Pontos Turisticos: ");
  scanf("%d", &pontos2);

  //Calcular a densidade da população
  densidade1 = (float) populacao1 / area1;
  densidade2 = (float) populacao2 / area2;
  printf("Densidade da população da carta 1 (%s) é: %.2f\n", cidade1, densidade1);
  printf("Densidade da população da carta 2 (%s) é: %.2f\n" , cidade2, densidade2);
  //Calcular o PIB per capita
  percapita1 = (float) pib1 / populacao1;
  percapita2 = (float) pib2 / populacao2;
  printf("PIB per capita da carta 1 (%s) é: %.2f\n", cidade1, percapita1);
  printf("PIB per capita da carta 2 (%s) é: %.2f\n" , cidade2, percapita2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    printf("Escolhendo o atributo de comparação")
    printf("\nComparação de cartas (Atributo: Percapita)\n\n");
    printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, percapita1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, percapita2);

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    if (percapita1 > percapita2) {
         printf("Resultado: Carta 1 (%s) VENCEU \n", cidade1);
     } else if (percapita2 > percapita1){
        printf("Resultado: Carta 2 (%s) VENCEU \n", cidade2);
     } else {
         printf("Resultado: EMPATE!.\n"), cidade2;
     } 

    return 0;
}
