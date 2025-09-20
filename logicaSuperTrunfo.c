#include <stdio.h>

int main() {

    //Dados da carta 1 
    char estado1;
    char codigo1[5];
    char cidade1[25]; 
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    //Dados da carta 2
    char estado2;
    char codigo2[5];
    char cidade2[25];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    //**Cadastro das Cartas **

    //Dados da Carta 1
    printf("** Cadastre os dados da Carta 1: **\n");

    printf("Digite o estado da Carta 1: \n");
    scanf("%c", &estado1);
    
    printf("Digite o código da Carta 1: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da Carta 1: \n");
    scanf("%s", cidade1);

    printf("Digite a população da Carta 1: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da Carta 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da Carta 1: \n");
    scanf("%d", &pontosturisticos1);

    printf("\n");

    //Dados da Carta 2
    printf("** Cadastre os dados da Carta 2: **\n");

    printf("Digite o estado da Carta 2: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da Carta 2: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da Carta 2: \n");
    scanf("%s", cidade2);

    printf("Digite a população da Carta 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da Carta 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da Carta 2: \n");
    scanf("%d", &pontosturisticos2);

    printf("\n");

    float densidadepopulacional1 = populacao1 / area1;
    float densidadeinversa1 = 1 / densidadepopulacional1;
    float pibpercapita1 = (pib1 * 1000000) / populacao1;

    float densidadepopulacional2 = populacao2 / area2;
    float densidadeinversa2 = 1 / densidadepopulacional2;
    float pibpercapita2 = (pib2 * 1000000) / populacao2;

    //Cartas Prontas
    printf("## Carta 1 ##\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f em km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.3f reais\n", pibpercapita1);
    printf("\n");
    printf("## Carta 2 ##\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f em km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.3f reais\n", pibpercapita2);

    printf("\n");

    //Comparação das Cartas
    printf("## Comparação de Cartas (Atributo: População) ##\n");
    printf("Carta 1 - %s: %d habitantes\n", cidade1, populacao1);
    printf("Carta 2 - %s: %d habitantes\n", cidade2, populacao2);
    if(populacao1 > populacao2) {
        printf("Resultado: Carta 1(%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2(%s) venceu!\n", cidade2);
    }

    printf("\n");

    printf("## Comparação de Cartas (Atributo: Área) ##\n");
    printf("Carta 1 - %s: %.2fkm²\n", cidade1, area1);
    printf("Carta 2 - %s: %.2fkm²\n", cidade2, area2);
    if(area1 > area2) {
        printf("Resultado: Carta 1(%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2(%s) venceu!\n", cidade2);
    }

    printf("\n");

    printf("## Comparação de Cartas (Atributo: PIB) ##\n");
    printf("Carta 1 - %s: R$%.2f bilhões de reais\n", cidade1, pib1);
    printf("Carta 2 - %s: R$%.2f bilhões de reais\n", cidade2, pib2);
    if(pib1 > pib2) {
        printf("Resultado: Carta 1(%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2(%s) venceu!\n", cidade2);
    }

    printf("\n");

    printf("## Comparação de Cartas (Atributo: Pontos Turísticos) ##\n");
    printf("Carta 1 - %s: %d\n", cidade1, pontosturisticos1);
    printf("Carta 2 - %s: %d\n", cidade2, pontosturisticos2);
    if(pontosturisticos1 > pontosturisticos2) {
        printf("Resultado: Carta 1(%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2(%s) venceu!\n", cidade2);
    }

    printf("\n");

    printf("## Comparação de Cartas (Atributo: Densidade Populacional) ##\n");
    printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidadepopulacional1);
    printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidadepopulacional2);
    if(densidadeinversa1 > densidadeinversa2) {
        printf("Resultado: Carta 1(%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2(%s) venceu!\n", cidade2);
    }

    return 0;

}
