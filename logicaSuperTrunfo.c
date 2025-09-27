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

    int opcao;
    int comparacao;

    printf("## Jogo Super Trunfo ## \n");
    printf("\n");
    printf("Menu Principal \n");
    printf("1. Iniciar o jogo \n");
    printf("2. Regras\n");
    printf("3. Sair do Jogo\n");
    printf("Escolha uma das opções: ");
    scanf("%d", &opcao);
    printf("\n");

    //## OPÇÃO A: Iniciar o Jogo ##

    //**Cadastro das Cartas **
    switch(opcao) {
    case 1:
        //Dados da Carta 1
        printf("** Cadastre os dados da Carta 1: **\n");

        printf("Digite o estado da Carta 1: \n");
        scanf(" %c", &estado1);
    
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
        printf("Escolha qual atributo você deseja comparar entre as duas cartas: \n");
        printf("1. População \n");
        printf("2. Área em km² \n");
        printf("3. PIB \n");
        printf("4. Pontos Turísticos \n");
        printf("5. Densidade Populacional \n");
        printf("Escolha uma das opções: ");
        scanf("%d", &comparacao);

        printf("\n");

        switch(comparacao) {
        //Comparação: População.
        case 1:
            printf("## Comparação de Cartas (Atributo: População) ##\n");
            printf("Carta 1 - %s: %d habitantes\n", cidade1, populacao1);
            printf("Carta 2 - %s: %d habitantes\n", cidade2, populacao2);
            if(populacao1 > populacao2) {
                printf("Resultado: Carta 1(%s) venceu!\n", cidade1);
            } else if(populacao1 < populacao2) {
                printf("Resultado: Carta 2(%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
        //Comparação: Área em km².
            printf("## Comparação de Cartas (Atributo: Área) ##\n");
            printf("Carta 1 - %s: %.2fkm²\n", cidade1, area1);
            printf("Carta 2 - %s: %.2fkm²\n", cidade2, area2);
            if(area1 > area2) {
                printf("Resultado: Carta 1(%s) venceu!\n", cidade1);
            } else if(area1 < area2) {
                printf("Resultado: Carta 2(%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
        //Comparação: PIB.
            printf("## Comparação de Cartas (Atributo: PIB) ##\n");
            printf("Carta 1 - %s: R$%.2f bilhões de reais\n", cidade1, pib1);
            printf("Carta 2 - %s: R$%.2f bilhões de reais\n", cidade2, pib2);
            if(pib1 > pib2) {
                printf("Resultado: Carta 1(%s) venceu!\n", cidade1);
            } else if(pib1 < pib2 ){
                printf("Resultado: Carta 2(%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
        //Comparação: Pontos turísticos.
            printf("## Comparação de Cartas (Atributo: Pontos Turísticos) ##\n");
            printf("Carta 1 - %s: %d\n", cidade1, pontosturisticos1);
            printf("Carta 2 - %s: %d\n", cidade2, pontosturisticos2);
            if(pontosturisticos1 > pontosturisticos2) {
                printf("Resultado: Carta 1(%s) venceu!\n", cidade1);
            } else if(pontosturisticos1 < pontosturisticos2) {
                printf("Resultado: Carta 2(%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
        //Comparação: Densidade populacional.
            printf("## Comparação de Cartas (Atributo: Densidade Populacional) ##\n");
            printf("Carta 1 - %s: %.2f\n", cidade1, densidadepopulacional1);
            printf("Carta 2 - %s: %.2f\n", cidade2, densidadepopulacional2);
            if(densidadeinversa1 > densidadeinversa2) {
                printf("Resultado: Carta 1(%s) venceu!\n", cidade1);
            } else if(densidadeinversa1 < densidadeinversa2) {
                printf("Resultado: Carta 2(%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;

        }
    break;

    //## OPÇÃO B: Regras ##
    case 2:
            printf("## Regras ##\n");
            printf("1º O jogador que possuir a carta com maior valor do atributo escolhido, vence! (Exceto no atributo *Densidade Populacional*) \n");
            printf("2º Divirta-se! \n");
            break;

    //## OPÇÃO C: Sair do Jogo ##
    case 3:
            printf("Saindo do jogo... \n");
            break;
    default:
            printf("Opção inválida! \n");
            break;
    }

    return 0;

}
