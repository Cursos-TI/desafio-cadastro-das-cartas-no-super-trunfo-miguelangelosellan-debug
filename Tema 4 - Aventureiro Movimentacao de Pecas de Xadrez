#include <stdio.h>

int main() {
    // Quantidade de casas para cada peça
    int casasTorre = 5;   // Torre: 5 casas para direita
    int casasBispo = 5;   // Bispo: 5 casas na diagonal (cima + direita)
    int casasRainha = 8;  // Rainha: 8 casas para esquerda

    int casasBaixo = 2;   // Cavalo: 2 casas para baixo
    int casasEsquerda = 1;// Cavalo: 1 casa para esquerda

    int i, j; // variáveis de controle

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
    i = 1;
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

    // -------------------------------
    // Rainha - usando DO-WHILE
    // -------------------------------
    printf("Movimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);

    printf("\n");

    // -------------------------------
    // Cavalo - usando loops aninhados
    // -------------------------------
    printf("Movimento do Cavalo:\n");

    // Primeiro movimento: 2 casas para baixo
    for (i = 1; i <= casasBaixo; i++) {
        int k = 0;
        // Loop interno usando while para repetir o mesmo passo
        while (k < 1) {
            printf("Baixo\n");
            k++;
        }
    }

    // Segundo movimento: 1 casa para esquerda
    for (j = 1; j <= casasEsquerda; j++) {
        int k = 0;
        while (k < 1) {
            printf("Esquerda\n");
            k++;
        }
    }

    return 0;
}
