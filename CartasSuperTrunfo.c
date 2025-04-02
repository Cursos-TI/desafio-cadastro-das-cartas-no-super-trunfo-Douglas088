#include <stdio.h>

int main() {

    char estado;
    char codigoDaCarta[4];
    char nomeDaCidade[15];
    float populacao;
    float area;
    float pib;
    int NumeroDePontosTuristicos;
    float densidadePopulacional;
    float pibCapital;

    printf("Digite a letra do Estado (A - H):\n");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta ex(A01, A04):\n");
    scanf(" %3s", codigoDaCarta);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nomeDaCidade);

    printf("Qual o numero de habitantes da cidade?\n");
    scanf(" %f", &populacao);

    printf("Qual a area em quilomentros quadrados?\n");
    scanf(" %f", &area);

    printf("Qual o PIB da cidade?\n");
    scanf(" %f", &pib);

    printf("Qual a quantidade de pontos turísticos na cidade?\n");
    scanf(" %d", &NumeroDePontosTuristicos);

    densidadePopulacional = populacao / area;
    pibCapital = pib / populacao;

    printf("\nAgora cadastre a segunda carta\n");

    char estado2;
    char codigoDaCarta2[4];
    char nomeDaCidade2[15];
    float populacao2;
    float area2;
    float pib2;
    int NumeroDePontosTuristicos2;
    float densidadePopulacional2;
    float pibCapital2;

    printf("Digite a letra do Estado(A - H):\n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta ex(A01, A04):\n");
    scanf(" %3s", codigoDaCarta2);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nomeDaCidade2);

    printf("Qual o numero de habitantes da cidade?\n");
    scanf(" %f", &populacao2);

    printf("Qual a area em quilomentros quadrados?\n");
    scanf(" %f", &area2);

    printf("Qual o PIB da cidade?\n");
    scanf(" %f", &pib2);

    printf("Qual a quantidade de pontos turisticos na cidade?\n");
    scanf(" %d", &NumeroDePontosTuristicos2);

    densidadePopulacional2 = populacao2 / area2;
    pibCapital2 = pib2 / populacao2;

    printf("\nCarta 1:\n");
    printf("Estado: %c \n", estado);
    printf("Codigo: %s \n", codigoDaCarta);
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("Populacao: %.2f \n", populacao);
    printf("Area: %.2f \n", area);
    printf("PIB: %.2f \n", pib);
    printf("Pontos Turisticos: %d \n", NumeroDePontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f \n", pibCapital);

    printf("\nCarta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("Populacao: %.2f \n", populacao2);
    printf("Area: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Pontos Turisticos: %d \n", NumeroDePontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f \n", pibCapital2);

    return 0;   
}
