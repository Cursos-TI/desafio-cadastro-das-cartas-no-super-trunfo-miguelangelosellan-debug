#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível Mestre: Comparação avançada com múltiplos atributos

int main() {
    // ===== Cartas pré-definidas =====
    char nome1[50] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;
    float densidade1 = populacao1 / area1;

    char nome2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosTuristicos2 = 30;
    float densidade2 = populacao2 / area2;

    // ===== Variáveis auxiliares =====
    int escolha1, escolha2;
    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2;
    float soma1, soma2;

    // ===== Menu para escolha do primeiro atributo =====
    printf("=== Super Trunfo - Comparação de Cartas ===\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    scanf("%d", &escolha1);

    // ===== Menu para escolha do segundo atributo (dinâmico) =====
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != escolha1) { // não mostra o mesmo atributo de novo
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Populacional\n"); break;
            }
        }
    }
    scanf("%d", &escolha2);

    // ===== Função para obter valor do atributo escolhido =====
    // (reaproveitamos lógica para carta 1 e carta 2)
    switch (escolha1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontosTuristicos1; valor1_carta2 = pontosTuristicos2; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
        default: printf("Atributo inválido!\n"); return 0;
    }

    switch (escolha2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontosTuristicos1; valor2_carta2 = pontosTuristicos2; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
        default: printf("Atributo inválido!\n"); return 0;
    }

    // ===== Comparação atributo 1 =====
    printf("\n--- Comparação do primeiro atributo ---\n");
    if (escolha1 == 5) { // Densidade -> menor vence
        printf("%s: %.2f | %s: %.2f\n", nome1, valor1_carta1, nome2, valor1_carta2);
        (valor1_carta1 < valor1_carta2) ? printf("Vencedor: %s\n", nome1) :
        (valor1_carta2 < valor1_carta1) ? printf("Vencedor: %s\n", nome2) :
        printf("Empate!\n");
    } else {
        printf("%s: %.2f | %s: %.2f\n", nome1, valor1_carta1, nome2, valor1_carta2);
        (valor1_carta1 > valor1_carta2) ? printf("Vencedor: %s\n", nome1) :
        (valor1_carta2 > valor1_carta1) ? printf("Vencedor: %s\n", nome2) :
        printf("Empate!\n");
    }

    // ===== Comparação atributo 2 =====
    printf("\n--- Comparação do segundo atributo ---\n");
    if (escolha2 == 5) { // Densidade -> menor vence
        printf("%s: %.2f | %s: %.2f\n", nome1, valor2_carta1, nome2, valor2_carta2);
        (valor2_carta1 < valor2_carta2) ? printf("Vencedor: %s\n", nome1) :
        (valor2_carta2 < valor2_carta1) ? printf("Vencedor: %s\n", nome2) :
        printf("Empate!\n");
    } else {
        printf("%s: %.2f | %s: %.2f\n", nome1, valor2_carta1, nome2, valor2_carta2);
        (valor2_carta1 > valor2_carta2) ? printf("Vencedor: %s\n", nome1) :
        (valor2_carta2 > valor2_carta1) ? printf("Vencedor: %s\n", nome2) :
        printf("Empate!\n");
    }

    // ===== Soma dos dois atributos =====
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    printf("\n--- Resultado Final ---\n");
    printf("%s - Soma dos atributos: %.2f\n", nome1, soma1);
    printf("%s - Soma dos atributos: %.2f\n", nome2, soma2);

    (soma1 > soma2) ? printf("Resultado final: %s venceu a rodada!\n", nome1) :
    (soma2 > soma1) ? printf("Resultado final: %s venceu a rodada!\n", nome2) :
    printf("Resultado final: Empate!\n");

    return 0;
}
