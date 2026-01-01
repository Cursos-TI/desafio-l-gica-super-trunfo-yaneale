#include <stdio.h>

// Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
int main() {
    char pais1[30], pais2[30];
    unsigned long int populacao1, populacao2;
    int  pontos1, pontos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, 
    percapita1, percapita2;
    int resultado1 = 0, resultado2 = 0, resultado3 = 0;
    
    // Cadastro das Cartas:
    printf("=== Ben-vindo no Cadastro das Cartas Super Triunfo ===\n");
    // utilize o código do primeiro desafio

    //cadastro da primeira carta
  printf("Carta 1 \n");
  printf("Digite o Nome do Pais: ");
  scanf("%s", pais1);
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
  scanf("%s", pais2);
  printf("Digite o Numero da População: ");
  scanf("%lu", &populacao2);
  printf("Digite a Area: ");
  scanf("%f", &area2);
  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  printf("Digite o Numero de Pontos Turisticos: ");
  scanf("%d", &pontos2);

  //Calcular a densidade da população
  //Densidade da população menor ganha
  densidade1 = (float) populacao1 / area1;
  densidade2 = (float) populacao2 / area2;
  printf("\nDensidade da população da carta 1 (%s) é: %.2f - carta 2 (%s) é: %.2f\n"
    , pais1, densidade1, pais2, densidade2);

  //Calcular o PIB per capita
  percapita1 = (float) pib1 / populacao1;
  percapita2 = (float) pib2 / populacao2;
  printf("PIB per capita da carta 1 (%s) é: %.2f - carta 2 (%s) é: %.2f\n"
    , pais1, percapita1, pais2, percapita2);
  
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    /*printf("\nComparação de cartas (Atributo: Percapita)\n\n");
    printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, percapita1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, percapita2); */

    int primerAtributo, segundoAtributo, terceiroAtributo;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;
    float valor3_c1 = 0, valor3_c2 = 0;

    printf("\nEscolha o atributo de comparação\n");
    printf("1. População\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de pontos turisticos\n");
    printf("5. Densidade geografica\n");
    printf("6. PIB percapita\n");
    scanf("%d", &primerAtributo);

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    switch (primerAtributo)
    {
    case 1:
        printf("\n*** Você escolheu o Atributo População ***\n");
        printf("Carta 1 (%s) População: %lu - Carta 2 (%s) População: %lu\n",pais1 ,populacao1 ,pais2 ,populacao2);
        valor1_c1 = populacao1;
        valor1_c2 = populacao2;
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        if (populacao1 > populacao2) {
            printf("Carta 1 Venceu %s..!",pais1);
        } else if (populacao1 == populacao2) {
            printf("Empatou..!\n");
        } else {
            printf("Carta 2 Venceu %s..!",pais2);
        }
        break;
    case 2:
        printf("*** Você escolheu o atributo Area ***\n");
        printf("Carta 1 (%s) Area: %.2f - Carta 2 (%s) Area: %.2f\n",pais1, area1, pais2, area2);
        valor1_c1 = area1;
        valor1_c2 = area2;
        resultado1 = area1 > area2 ? 1 : 0;
        if (area1 > area2)
        {
            printf("Carta 1 Venceu..!\n");
        } else if (area1 == area2)
        {
            printf("Empatou..!\n");
        } else {
            printf ("Carta 2 venceu..!\n");
        }
        break;
    case 3:
        printf("*** Você escolheu o atributo PIB ***\n");
        printf("Carta 1 (%s) PIB: %.2f - Carta 2 (%s) PIB: %.2f\n", pais1, pib1, pais2, pib2);
        valor1_c1 = pib1;
        valor1_c2 = pib2;
        resultado1 = pib1 > pib2 ? 1 : 0;
        if (pib1 > pib2)
        {
            printf("Carta 1 venceu..!\n");
        } else if (pib1 == pib2)
        {
            printf("Empatou..!\n");
        } else
        {
            printf("Carta 2 venceu..!\n");
        }
        break;
    case 4:
        printf("*** Você escolheu o atributo Pontos Turisticos ***\n");
        printf("Carta 1 (%s) Pontos Turisticos: %d - Carta 2 (%s) Pontos Turisticos: %d\n", pais1, pontos1, pais2, pontos2);
        valor1_c1 = pontos1;
        valor1_c2 = pontos2;
        resultado1 = pontos1 > pontos2 ? 1 : 0;
        if (pontos1 > pontos2)
        {
            printf("Carta 1 Venceu..!\n");
        } else if (pontos1 == pontos2)
        {
            printf("Empatou..!\n");
        } else {
            printf ("Carta 2 venceu..!\n");
        }
        break;
    case 5:
        printf("*** Você escolheu o atributo Densidade Demografica ***\n");
        printf("Carta 1 (%s) Densidade Demografica: %.2f - Carta 2 (%s) Densidade Demografica: %.2f\n",pais1, densidade1, pais2, densidade2);
        valor1_c1 = densidade1;
        valor1_c2 = densidade2;
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        if (densidade1 < densidade2)
        {
            printf("Carta 1 Venceu..!\n");
        } else if (densidade1 == densidade2)
        {
            printf("Empatou..!\n");
        } else {
            printf ("Carta 2 venceu..!\n");
        }
        break;
    case 6:
        printf("*** Você escolheu o atributo PIB Per Capita ***\n");
        printf("Carta 1 (%s) PIB Per Capita: %.2f - Carta 2 (%s) PIB Per Capita: %.2f\n", pais1, percapita1, pais2, percapita2);
        valor1_c1 = percapita1;
        valor1_c2 = percapita2;
        resultado1 = percapita1 > percapita2 ? 1 : 0;
        if (percapita1 > percapita2)
        {
            printf("Carta 1 Venceu..!\n");
        } else if (percapita1 == percapita2)
        {
            printf("Empatou..!\n");
        } else {
            printf ("Carta 2 venceu..!\n");
        }
        break; 
    default:
            printf("Escolha invalida\n");
        break;
    }

    printf("Escolha o Segundo Atributo de Comparação: \n");
    printf("Atenção: Você deve escolher um atributo diferente do primeiro\n");
    printf("1. População\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de pontos turisticos\n");
    printf("5. Densidade geografica\n");
    printf("6. PIB percapita\n");
    scanf("%d", &segundoAtributo);

    if (primerAtributo == segundoAtributo)
    {
        printf("Você escolheu o mesmo atributo!");
    } else {
        switch (segundoAtributo)
    {
        case 1:
            printf("\n*** Você escolheu o Atributo População ***\n");
        printf("Carta 1 (%s) População: %lu - Carta 2 (%s) População: %lu\n",pais1 ,populacao1 ,pais2 ,populacao2);
        valor2_c1 = populacao1;
        valor2_c2 = populacao2;
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        if (populacao1 > populacao2)
        {
            printf("Carta 1 Venceu..!\n");
        } else if (populacao1 == populacao2)
        {
            printf("Empatou..!\n");
        } else {
            printf("Carta 2 Venceu..!\n");
        }
        break;
    case 2:
        printf("*** Você escolheu o atributo Area ***\n");
        printf("Carta 1 (%s) Area: %.2f - Carta 2 (%s) Area: %.2f\n",pais1, area1, pais2, area2);
        valor2_c1 = area1;
        valor2_c2 = area2;
        resultado2 = area1 > area2 ? 1 : 0;
        if (area1 > area2)
        {
            printf("Carta 1 Venceu..!\n");
        } else if (area1 == area2)
        {
            printf("Empatou..!\n");
        } else {
            printf ("Carta 2 venceu..!\n");
        }
        break;
    case 3:
        printf("*** Você escolheu o atributo PIB ***\n");
        printf("Carta 1 (%s) PIB: %.2f - Carta 2 (%s) PIB: %.2f\n", pais1, pib1, pais2, pib2);
        valor2_c1 = pib1;
        valor2_c2 = pib2;
        resultado2 = pib1 > pib2 ? 1 : 0;
        if (pib1 > pib2)
        {
            printf("Carta 1 venceu..!\n");
        } else if (pib1 == pib2)
        {
            printf("Empatou..!\n");
        } else
        {
            printf("Carta 2 venceu..!\n");
        }
        break;
    case 4:
        printf("*** Você escolheu o atributo Pontos Turisticos ***\n");
        printf("Carta 1 (%s) Pontos Turisticos: %d - Carta 2 (%s) Pontos Turisticos: %d\n", pais1, pontos1, pais2, pontos2);
        resultado2 = pontos1 > pontos2 ? 1 : 0;
        if (pontos1 > pontos2)
        {
            printf("Carta 1 Venceu..!\n");
        } else if (pontos1 == pontos2) {
            printf("Empatou..!\n");
        } else {
            printf ("Carta 2 venceu..!\n");
        }
        break;
    case 5:
        printf("*** Você escolheu o atributo Densidade Demografica ***\n");
        printf("Carta 1 (%s) Densidade Demografica: %.2f - Carta 2 (%s) Densidade Demografica: %.2f\n",pais1, densidade1, pais2, densidade2);
        valor2_c1 = densidade1;
        valor2_c2 = densidade2;
        resultado2 = densidade1 < densidade2 ? 1 : 0;
        if (densidade1 < densidade2)
        {
            printf("Carta 1 Venceu..!\n");
        } else if (densidade1 == densidade2)
        {
            printf("Empatou..!\n");
        } else {
            printf ("Carta 2 venceu..!\n");
        }
        break;
    case 6:
        printf("*** Você escolheu o atributo PIB Per Capita ***\n");
        printf("Carta 1 (%s) PIB Per Capita: %.2f - Carta 2 (%s) PIB Per Capita: %.2f\n", pais1, percapita1, pais2, percapita2);
        valor2_c1 = percapita1;
        valor2_c2 = percapita2;
        resultado2 = percapita1 > percapita2 ? 1 : 0;
        if (percapita1 > percapita2)
        {
            printf("Carta 1 Venceu..!\n");
        } else if (percapita1 == percapita2)
        {
            printf("Empatou..!\n");
        } else {
            printf ("Carta 2 venceu..!\n");
        }
        break; 
    default:
            printf("Escolha invalida\n");
        break;
    }
    }
    printf("Escolha o Terceiro Atributo de Comparação: \n");
    printf("Atenção: Você deve escolher um atributo diferente do primeiro e do segundo\n");
    printf("1. População\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de pontos turisticos\n");
    printf("5. Densidade geografica\n");
    printf("6. PIB percapita\n");
    scanf("%d", &terceiroAtributo);

    if (primerAtributo == terceiroAtributo || terceiroAtributo == segundoAtributo)
    {
        printf("Você escolheu o mesmo atributo!\n");
    } else {
        switch (terceiroAtributo)
    {
        case 1:
            printf("\n*** Voçê escolheu o Atributo População ***\n");
        printf("Carta 1 (%s) População: %lu - Carta 2 (%s) População: %lu\n",pais1 ,populacao1 ,pais2 ,populacao2);
        valor3_c1 = populacao1;
        valor3_c2 = populacao2;
        resultado3 = populacao1 > populacao2 ? 1 : 0;
        if (populacao1 > populacao2)
        {
            printf("Carta 1 Venceu..!\n");
        } else if (populacao1 == populacao2)
        {
            printf("Empatou..!\n");
        } else {
            printf("Carta 2 Venceu..!\n");
        }
        break;
    case 2:
        printf("*** Você escolheu o atributo Area ***\n");
        printf("Carta 1 (%s) Area: %.2f - Carta 2 (%s) Area: %.2f\n",pais1, area1, pais2, area2);
        valor3_c1 = area1;
        valor3_c2 = area2;
        resultado3 = area1 > area2 ? 1 : 0;
        if (area1 > area2)
        {
            printf("Carta 1 Venceu..!\n");
        } else if (area1 == area2)
        {
            printf("Empatou..!\n");
        } else {
            printf ("Carta 2 venceu..!\n");
        }
        break;
    case 3:
        printf("*** Você escolheu o atributo PIB ***\n");
        printf("Carta 1 (%s) PIB: %.2f - Carta 2 (%s) PIB: %.2f\n", pais1, pib1, pais2, pib2);
        valor3_c1 = pib1;
        valor3_c2 = pib2;
        resultado3 = pib1 > pib2 ? 1 : 0;
        if (pib1 > pib2)
        {
            printf("Carta 1 venceu..!\n");
        } else if (pib1 == pib2)
        {
            printf("Empatou..!\n");
        } else
        {
            printf("Carta 2 venceu..!\n");
        }
        break;
    case 4:
        printf("*** Você escolheu o atributo Pontos Turisticos ***\n");
        printf("Carta 1 (%s) Pontos Turisticos: %d - Carta 2 (%s) Pontos Turisticos: %d\n", pais1, pontos1, pais2, pontos2);
        valor3_c1 = pontos1;
        valor3_c2 = pontos2;
        resultado3 = pontos1 > pontos2 ? 1 : 0;
        if (pontos1 > pontos2)
        {
            printf("Carta 1 Venceu..!\n");
        } else if (pontos1 == pontos2)
        {
            printf("Empatou..!\n");
        } else {
            printf ("Carta 2 venceu..!\n");
        }
        break;
    case 5:
        printf("*** Você escolheu o atributo Densidade Demografica ***\n");
        printf("Carta 1 (%s) Densidade Demografica: %.2f - Carta 2 (%s) Densidade Demografica: %.2f\n",pais1, densidade1, pais2, densidade2);
        valor3_c1 = densidade1;
        valor3_c2 = densidade2;
        resultado3 = densidade1 < densidade2 ? 1 : 0;
        if (densidade1 < densidade2)
        {
            printf("Carta 1 Venceu..!\n");
        } else if (densidade1 == densidade2)
        {
            printf("Empatou..!\n");
        } else {
            printf ("Carta 2 venceu..!\n");
        }
        break;
    case 6:
        printf("*** Você escolheu o atributo PIB Per Capita ***\n");
        printf("Carta 1 (%s) PIB Per Capita: %.2f - Carta 2 (%s) PIB Per Capita: %.2f\n", pais1, percapita1, pais2, percapita2);
        valor3_c1 = percapita1;
        valor3_c2 = percapita2;
        resultado3 = percapita1 > percapita2 ? 1 : 0;
        if (percapita1 > percapita2)
        {
            printf("Carta 1 Venceu..!\n");
        } else if (percapita1 == percapita2)
        {
            printf("Empatou..!\n");
        } else {
            printf ("Carta 2 venceu..!\n");
        }
        break; 
    default:
            printf("Escolha invalida\n");
        break;
    }
    }
    //RESULTADO FINAL
    printf ("*** Resultado Final ***\n");

    printf("Soma dos Atributos:\n");
    printf("%s: %2.f\n", pais1, valor1_c1 + valor2_c1 + valor3_c1);
    printf("%s: %2.f\n", pais2, valor2_c1 + valor2_c2 + valor3_c2);

    if (resultado1 && resultado2) {
        printf("Carta 1 Venceu (%s)..!", pais1);
    } else if (resultado1 != resultado2) {
        printf("Empatou..!");
    } else {
        printf("Carta 2 Venceu (%s)..!", pais2);
    }
    
    return 0;
}
