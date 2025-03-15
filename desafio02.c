#include <stdio.h>

int main() {
    // Dados 
    char cidade1[20];
    char cidade2[20];
    int populacao1;
    int populacao2;
    float area1, area2;
    float pib1, pib2;
    int opcao1, opcao2;

    // Entrada de dados
    printf("\nDigite o nome da primeira cidade: \n"); 
    scanf("%s", cidade1);
    printf("\nDigite a populacao da primeira cidade: \n");
    scanf("%d", &populacao1);
    printf("\nDigite a area da primeira cidade (km²): \n");
    scanf("%f", &area1);
    printf("\nDigite o PIB da primeira cidade (em bilhoes): \n");
    scanf("%f", &pib1);

    printf("\nDigite o nome da segunda cidade: \n");
    scanf("%s", cidade2);
    printf("\nDigite a populacao da segunda cidade: \n");
    scanf("%d", &populacao2);
    printf("\nDigite a area da segunda cidade (km²): \n");
    scanf("%f", &area2);
    printf("\nDigite o PIB da segunda cidade (em bilhoes): \n");
    scanf("%f", &pib2);

    // Menu interativo para escolha dos criterios de comparacao
    printf("\nEscolha o primeiro criterio de comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    
    do {
        printf("Qual criterio voce escolhe? ");
        if (scanf("%d", &opcao1) != 1) {
            printf("Entrada invalida! Digite um numero entre 1 e 3.\n");
            while (getchar() != '\n'); // Limpa buffer de entrada
            opcao1 = 0;
        } else if (opcao1 < 1 || opcao1 > 3) {
            printf("Opcao invalida! Digite um numero entre 1 e 3.\n");
        }
    } while (opcao1 < 1 || opcao1 > 3);

    printf("\nEscolha o segundo criterio de comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    
    do {
        printf("Qual criterio voce escolhe? ");
        if (scanf("%d", &opcao2) != 1) {
            printf("Entrada invalida! Digite um numero entre 1 e 3.\n");
            while (getchar() != '\n'); // Limpa buffer de entrada
            opcao2 = 0;
        } else if (opcao2 < 1 || opcao2 > 3) {
            printf("Opcao invalida! Digite um numero entre 1 e 3.\n");
        }
    } while (opcao2 < 1 || opcao2 > 3);

    // Comparacao baseada na escolha do usuario
    int resultado1 = 0, resultado2 = 0;

    switch (opcao1) {
        case 1:
            resultado1 = (populacao1 > populacao2) ? 1 : (populacao1 < populacao2) ? 2 : 0;
            break;
        case 2:
            resultado1 = (area1 > area2) ? 1 : (area1 < area2) ? 2 : 0;
            break;
        case 3:
            resultado1 = (pib1 > pib2) ? 1 : (pib1 < pib2) ? 2 : 0;
            break;
    }

    switch (opcao2) {
        case 1:
            resultado2 = (populacao1 > populacao2) ? 1 : (populacao1 < populacao2) ? 2 : 0;
            break;
        case 2:
            resultado2 = (area1 > area2) ? 1 : (area1 < area2) ? 2 : 0;
            break;
        case 3:
            resultado2 = (pib1 > pib2) ? 1 : (pib1 < pib2) ? 2 : 0;
            break;
    }

    printf("\nResultado da comparacao:\n");
    if (resultado1 == 1 && resultado2 == 1) {
        printf("Carta 1 (%s) venceu em ambos os criterios!\n", cidade1);
    } else if (resultado1 == 2 && resultado2 == 2) {
        printf("Carta 2 (%s) venceu em ambos os criterios!\n", cidade2);
    } else if ((resultado1 == 1 && resultado2 == 2) || (resultado1 == 2 && resultado2 == 1)) {
        printf("Cada carta venceu em um criterio!\n");
    } else {
        printf("Empate!\n");
    }

    printf("Fim do duelo!\n");

    return 0;
}
