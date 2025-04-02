#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigoDaCarta1[4], codigoDaCarta2[4];
    char nomeDaCidade1[15], nomeDaCidade2[15];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    printf("Digite a letra do Estado (A - H):\n");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (ex: A01, A04):\n");
    scanf(" %3s", codigoDaCarta1);
    getchar();
    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nomeDaCidade1);
    printf("Qual o numero de habitantes da cidade?\n");
    scanf(" %lu", &populacao1);
    printf("Qual a area em quilometros quadrados?\n");
    scanf(" %f", &area1);
    printf("Qual o PIB da cidade?\n");
    scanf(" %f", &pib1);
    printf("Qual a quantidade de pontos turisticos na cidade?\n");
    scanf(" %d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    printf("\nAgora cadastre a segunda carta\n");
    printf("Digite a letra do Estado (A - H):\n");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (ex: A01, A04):\n");
    scanf(" %3s", codigoDaCarta2);
    getchar();
    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nomeDaCidade2);
    printf("Qual o numero de habitantes da cidade?\n");
    scanf(" %lu", &populacao2);
    printf("Qual a area em quilometros quadrados?\n");
    scanf(" %f", &area2);
    printf("Qual o PIB da cidade?\n");
    scanf(" %f", &pib2);
    printf("Qual a quantidade de pontos turisticos na cidade?\n");
    scanf(" %d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta %d venceu\n", populacao1 > populacao2 ? 1 : 2);
    printf("Area: Carta %d venceu\n", area1 > area2 ? 1 : 2);
    printf("PIB: Carta %d venceu\n", pib1 > pib2 ? 1 : 2);
    printf("Pontos Turisticos: Carta %d venceu\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu\n", densidade1 < densidade2 ? 1 : 2);
    printf("PIB per Capita: Carta %d venceu\n", pibPerCapita1 > pibPerCapita2 ? 1 : 2);
    printf("Super Poder: Carta %d venceu\n", superPoder1 > superPoder2 ? 1 : 2);

    return 0;
}
