#include <stdio.h>

// ---------------------------
// Funções Recursivas
// ---------------------------

// Função recursiva para a Torre
void moverTorre(int casas) {
    if (casas <= 0) return; // caso base
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// Função recursiva para a Rainha
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o Bispo
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// ---------------------------
// Função Principal
// ---------------------------
int main() {
    // Variáveis de controle das casas
    int casasTorre = 5;    // Torre: 5 casas à direita
    int casasBispo = 5;    // Bispo: 5 casas na diagonal
    int casasRainha = 8;   // Rainha: 8 casas à esquerda

    // -------------------------------
    // Torre - recursividade
    // -------------------------------
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // -------------------------------
    // Bispo - recursividade
    // -------------------------------
    printf("Movimento do Bispo (recursivo):\n");
    moverBispoRecursivo(casasBispo);
    printf("\n");

    // -------------------------------
    // Bispo - loops aninhados
    // Loop externo = vertical (Cima)
    // Loop interno = horizontal (Direita)
    // -------------------------------
    printf("Movimento do Bispo (loops aninhados):\n");
    for (int i = 0; i < casasBispo; i++) {       // movimento vertical
        for (int j = 0; j < 1; j++) {            // movimento horizontal
            printf("Cima Direita\n");
        }
    }
    printf("\n");

    // -------------------------------
    // Rainha - recursividade
    // -------------------------------
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // -------------------------------
    // Cavalo - loops complexos
    // Movimento em “L”: 2 casas para cima, 1 para a direita
    // -------------------------------
    printf("Movimento do Cavalo:\n");
    int movimentosVertical = 2;
    int movimentosHorizontal = 1;

    // Loop externo controla vertical
    for (int i = 0; i <= movimentosVertical; i++) {
        if (i == 0) continue;  // ignora a iteração inicial
        if (i > movimentosVertical) break; // evita excesso

        printf("Cima\n");

        // Quando terminar o vertical, faz o horizontal
        if (i == movimentosVertical) {
            int j = 0;
            while (j < movimentosHorizontal) {
                printf("Direita\n");
                j++;
            }
        }
    }

    return 0;
}
