#include <stdio.h>

int main() {
    // Dados 
    char cidade1[20];
    char cidade2[20];
    int populacao1;
    int populacao2;

    // Entrada de dados
    printf("\nDigite o nome da primeira cidade: \n"); 
    scanf("%s", cidade1);
    printf("\nDigite a população da primeira cidade: \n");
    scanf("%d", &populacao1);

    printf("\nDigite o nome da segunda cidade: \n");
    scanf("%s", cidade2);
    printf("\nDigite a população da segunda cidade: \n");
    scanf("%d", &populacao2);


    // Comparação das propriedades
    printf("\nComparação de cartas (Atributo: População):\n");

    if (populacao1 > populacao2) {
        printf("Resultado: Carta (%s) venceu!\n", cidade1);
    } else if (populacao1 < populacao2) {
        printf("Resultado: Carta (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    printf("Fim do duelo!\n");

    return 0;
}
