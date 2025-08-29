#include <stdio.h>

int main() {


    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1,pib2;
    int turistico1, turistico2;
    float densidade1;
    float densidade2;
    float pibpc1;
    float pibpc2;


    printf("   Desafio Super Trunfo\n");

    printf("\n");

    printf("   Cadastrar Carta (01)\n");

    printf("\n");

    printf("Digite a letra correspondente ao seu Estado: \n");
    scanf("%c", &estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &turistico1);

    //Calculo da Densidade Populacional:
    densidade1 = (float)populacao1 / area1;

    //Cálculo do PIB per Capita;
    pibpc1 = (float)pib1 / populacao1;

    printf("\n");

    printf("   Carta (01) cadastrada com sucesso!!! \n");

    printf("\n");


    printf("Carta 01: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f", densidade1);
    printf(" hab/km²\n");
    printf("PIB per Capita: %.2F", pibpc1);
    printf(" reais\n");


    printf("\n");

    printf("   Cadastrar Carta (02)\n");

    printf("\n");

    printf("Digite a letra correspondente ao seu Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &turistico2);

     //Calculo da Densidade Populacional:
    densidade2 = (float)populacao2 / area2;

    //Cálculo do PIB per Capita;
    pibpc2 = (float)pib2 / populacao2;


    printf("\n");

    printf("   Carta 02 cadastrada com sucesso!!! \n");

    printf("\n");


    printf("Carta 01: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f", densidade2);
    printf(" hab/km²\n");
    printf("PIB per Capita: %.2F", pibpc2);
    printf(" reais\n");


    return 0;
}
