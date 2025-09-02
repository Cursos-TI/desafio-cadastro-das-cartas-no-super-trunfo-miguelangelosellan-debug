#include <stdio.h>

int main() {
    // Quantidade de casas para cada peça
    int casasTorre = 5;   // Torre anda 5 casas para a direita
    int casasBispo = 5;   // Bispo anda 5 casas para cima e direita (diagonal)
    int casasRainha = 8;  // Rainha anda 8 casas para a esquerda

    int i; // variável de controle

    // -------------------------------
    // Torre - usando FOR
    // -------------------------------
    printf("Movimento da Torre:\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Espaço entre peças

    // -------------------------------
    // Bispo - usando WHILE
    // -------------------------------
    printf("Movimento do Bispo:\n");
    i = 1; // reiniciando contador
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

    // -------------------------------
    // Rainha - usando DO-WHILE
    // -------------------------------
    printf("Movimento da Rainha:\n");
    i = 1; // reiniciando contador
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);

    return 0;
}
