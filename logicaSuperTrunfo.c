#include <stdio.h>

//printf("Desafio Super Trunfo - Países");
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

// Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
int main() {
    char estado1[30], estado2[30];
    char cidade1[30], cidade2[30];
    unsigned long int populacao1, populacao2;
    int  pontos1, pontos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, percapita1, percapita2;
    int opcao;
    
    // Cadastro das Cartas:
    printf("=== Ben-vindo no Cadastro das Cartas Super Triunfo ===\n");
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    //cadastro da primeira carta
  printf("Carta 1 \n");
  printf("Digite o Nome do Pais: ");
  scanf("%s", estado1);
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
  printf("Digite o Nome do Pais: ");
  scanf("%s", estado2);
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
  printf("\nDensidade da população da carta 1 (%s) é: %.2f - carta 2 (%s) é: %.2f\n"
    , cidade1, densidade1, cidade2, densidade2);

  //Calcular o PIB per capita
  percapita1 = (float) pib1 / populacao1;
  percapita2 = (float) pib2 / populacao2;
  printf("PIB per capita da carta 1 (%s) é: %.2f - carta 2 (%s) é: %.2f\n"
    , cidade1, percapita1, cidade2, percapita2);
  
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    /*printf("\nComparação de cartas (Atributo: Percapita)\n\n");
    printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, percapita1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, percapita2); */

    printf("\nEscolha o atributo de comparação\n");
    printf("1. População\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de pontos turisticos\n");
    printf("5. Densidade geografica\n");
    printf("6. PIB percapita\n");
    scanf("%d", &opcao);

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    switch (opcao)
    {
    case 1:
        printf("\n*** Voçê escolheu o Atributo População ***\n");
        printf("Carta 1 (%s) População: %lu - Carta 2 (%s) População: %lu\n",cidade1 ,populacao1 ,cidade2 ,populacao2);
        if (populacao1>populacao2) {
            printf("Resultado: Carta 1 (%s) VENCEU População: %lu\n", cidade1, populacao1);
        } else if (populacao2>populacao1) {
            printf("Resultado: Carta 2 (%s) VENCEU População: %lu\n", cidade2, populacao2);
        }else{
            printf("Empate!");
        }
        break;
    case 2:
        printf("*** Você escolheu o atributo Area ***\n");
        printf("Carta 1 (%s) Area: %.2f - Carta 2 (%s) Area: %.2f\n",cidade1, area1, cidade2, area2);
        if (area1>area2) {
            printf("Resultado: Carta 1 (%s) VENCEU Area: %.2f\n", cidade1, area1);
        } else if (area2>area1) {
            printf("Resultado: Carta 2 (%s) VENCEU Area: %.2f\n", cidade2, area2);
        }else{
            printf("Empate!");
        }
        break;
    case 3:
        printf("*** Você escolheu o atributo PIB ***\n");
        printf("Carta 1 (%s) PIB: %.2f - Carta 2 (%s) PIB: %.2f\n", cidade1, pib1, cidade2, pib2);
        if (pib1>pib2) {
            printf("Resultado: Carta 1 (%s) VENCEU PIB: %.2f\n", cidade1, pib1);
        } else if (pib2>pib1) {
            printf("Resultado: Carta 2 (%s) VENCEU PIB: %.2f\n", cidade2, pib2);
        }else{
            printf("Empate!");
        }
        break;
    case 4:
        printf("*** Você escolheu o atributo Pontos Turisticos ***\n");
        printf("Carta 1 (%s) Pontos Turisticos: %d - Carta 2 (%s) Pontos Turisticos: %d\n", cidade1, pontos1, cidade2, pontos2);
        if (pontos1>pontos2) {
            printf("Resultado: Carta 1 (%s) VENCEU Pontos Turisticos: %d\n", cidade1, pontos1);
        } else if (pontos2>pontos1) {
            printf("Resultado: Carta 2 (%s) VENCEU Pontos Turisticos: %d\n", cidade2, pontos2);
        }else{
            printf("Empate!");
        }
        break;
    case 5:
        printf("*** Você escolheu o atributo Densidade Demografica ***\n");
        printf("Carta 1 (%s) Densidade Demografica: %.2f - Carta 2 (%s) Densidade Demografica: %.2f\n",cidade1, densidade1, cidade2, densidade2);
        if (densidade1>densidade2) {
            printf("Resultado: Carta 1 (%s) VENCEU Densidade Demografica: %.2f\n", cidade1, densidade1);
        } else if (densidade2>densidade1){
            printf("Resultado: Carta 2 (%s) VENCEU Densidade Demografica: %.2f\n", cidade2, densidade2);
        }else{
            printf("Empate!");
        }
        break;
    case 6:
        printf("*** Você escolheu o atributo PIB Per Capita ***\n");
        printf("Carta 1 (%s) PIB Per Capita: %.2f - Carta 2 (%s) PIB Per Capita: %.2f\n", cidade1, percapita1, cidade2, percapita2);
        if (percapita1<percapita2) {
            printf("Resultado: Carta 1 (%s) VENCEU PIB Per Capita: %.2f\n", cidade1, percapita1);
        } else if (percapita2<percapita1) {
            printf("Resultado: Carta 2 (%s) VENCEU PIB Per Capita: %.2f\n", cidade2, percapita2);
        }else{
            printf("Empate!");
        }
        break; 
    default:
            printf("Escolha invalida");
        break;
    }

    return 0;
}
