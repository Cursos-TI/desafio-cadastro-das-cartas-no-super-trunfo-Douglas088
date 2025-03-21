#include <stdio.h>

int main() {

    char estado;
    char codigoDaCarta[4];
    char nomeDaCidade[15];
    int populacao;
    float area;
    float pib;
    int NumeroDePontosTuristicos;

    printf("Digite a letra do Estado(A - H):\n");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta ex(A01, A04):\n");
    scanf(" %3s", codigoDaCarta);

    printf("Digite o nome da cidade:\n");
    scanf(" %14s", nomeDaCidade);

    printf("Qual o numero de habitantes da cidade?\n");
    scanf(" %d", &populacao);

    printf("Qual a area em quilomentros quadrados?\n");
    scanf(" %f", &area);

    printf("Qual o PIB da cidade?\n");
    scanf(" %f", &pib);

    printf("Qual a quantidade de pontos turisticos na cidade?\n");
    scanf(" %d", &NumeroDePontosTuristicos);

    printf("Carta 1:\n");
    printf("Estado: %c \n", estado);
    printf("Codigo: %3s \n", codigoDaCarta);
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("Populacao: %d \n", populacao);
    printf("Area: %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Pontos Turisticos: %d \n", NumeroDePontosTuristicos);


    printf("Agora cadastre a segunda carta");

    char estado2;
    char codigoDaCarta2[4];
    char nomeDaCidade2[15];
    int populacao2;
    float area2;
    float pib2;
    int NumeroDePontosTuristicos2;

    printf("Digite a letra do Estado(A - H):\n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta ex(A01, A04):\n");
    scanf(" %3s", codigoDaCarta2);

    printf("Digite o nome da cidade:\n");
    scanf(" %14s", nomeDaCidade2);

    printf("Qual o numero de habitantes da cidade?\n");
    scanf(" %d", &populacao2);

    printf("Qual a area em quilomentros quadrados?\n");
    scanf(" %f", &area2);

    printf("Qual o PIB da cidade?\n");
    scanf(" %f", &pib2);

    printf("Qual a quantidade de pontos turisticos na cidade?\n");
    scanf(" %d", &NumeroDePontosTuristicos2);

    printf("Carta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %3s \n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Area: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Pontos Turisticos: %d \n", NumeroDePontosTuristicos2);


    return 0;   
}