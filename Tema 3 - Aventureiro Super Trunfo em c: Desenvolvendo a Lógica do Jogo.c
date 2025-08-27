#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível Aventureiro: Menu interativo e comparações com switch-case

int main() {
    // ===== Dados pré-cadastrados das cartas =====
    // Carta 1
    char nome1[50] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;
    float densidade1 = populacao1 / area1;

    // Carta 2
    char nome2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosTuristicos2 = 30;
    float densidade2 = populacao2 / area2;

    // ===== Menu de seleção =====
    int opcao;
    printf("=== Super Trunfo - Comparação de Cartas ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Escolha o atributo para comparação: ");
    scanf("%d", &opcao);

    // ===== Comparação com switch =====
    switch (opcao) {
        case 1: // População
            printf("\nComparação de cartas (Atributo: População)\n");
            printf("%s: %d habitantes\n", nome1, populacao1);
            printf("%s: %d habitantes\n", nome2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("\nComparação de cartas (Atributo: Área)\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);

            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("\nComparação de cartas (Atributo: PIB)\n");
            printf("%s: %.2f bilhões de reais\n", nome1, pib1);
            printf("%s: %.2f bilhões de reais\n", nome2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("\nComparação de cartas (Atributo: Pontos Turísticos)\n");
            printf("%s: %d pontos\n", nome1, pontosTuristicos1);
            printf("%s: %d pontos\n", nome2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Densidade populacional (menor vence)
            printf("\nComparação de cartas (Atributo: Densidade Populacional)\n");
            printf("%s: %.2f hab/km²\n", nome1, densidade1);
            printf("%s: %.2f hab/km²\n", nome2, densidade2);

            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("\nOpção inválida! Escolha um número entre 1 e 5.\n");
            break;
    }

    return 0;
}

