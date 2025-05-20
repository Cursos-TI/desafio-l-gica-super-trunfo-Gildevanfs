#include <stdio.h>

int main() {
    char codigo1[10], cidade1[50], estado1[3];
    int populacao1, pontosTuristicos1;
    float area1, pib1;
    float densidade1, pibPerCapita1;

    char codigo2[10], cidade2[50], estado2[3];
    int populacao2, pontosTuristicos2;
    float area2, pib2;
    float densidade2, pibPerCapita2;

    printf("Digite o código da cidade 1: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade 1: ");
    scanf("%s", cidade1);
    printf("Digite o estado da cidade 1 (sigla): ");
    scanf("%s", estado1);
    printf("Digite a população da cidade 1: ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade 1 (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade 1 (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da cidade 2
    printf("\nDigite o código da cidade 2: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade 2: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite o estado da cidade 2 (sigla): ");
    scanf("%s", estado2);
    printf("Digite a população da cidade 2: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade 2 (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade 2 (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo densidade e PIB per capita
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Exibindo dados das cidades
    printf("\n=== Dados das Cidades ===\n");

    printf("\nCidade 1: %s (%s)\n", cidade1, estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.6f\n", pibPerCapita1);

    printf("\nCidade 2: %s (%s)\n", cidade2, estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.6f\n", pibPerCapita2);

    // Comparação (atributo escolhido: População)
    printf("\n>>> Comparação de Cartas (Atributo: População)\n");
    printf("%s: %d habitantes\n", cidade1, populacao1);
    printf("%s: %d habitantes\n", cidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: %s venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: %s venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
