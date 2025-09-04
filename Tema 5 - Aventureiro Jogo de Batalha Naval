#include <stdio.h>

#define TAM_TABULEIRO 10   // Tamanho fixo do tabuleiro (10x10)
#define TAM_NAVIO 3        // Tamanho fixo dos navios

// Função para inicializar o tabuleiro com 0 (água)
void inicializarTabuleiro(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO]) {
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            tabuleiro[i][j] = 0; // 0 representa água
        }
    }
}

// Função para exibir o tabuleiro no console
void exibirTabuleiro(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO]) {
    printf("\n=== Tabuleiro de Batalha Naval ===\n\n");

    // Cabeçalho com índices de coluna
    printf("   ");
    for (int j = 0; j < TAM_TABULEIRO; j++) {
        printf("%2d ", j);
    }
    printf("\n");

    for (int i = 0; i < TAM_TABULEIRO; i++) {
        printf("%2d ", i); // Índice da linha
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para verificar se há espaço livre antes de posicionar o navio
int posicaoLivre(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int linha, int coluna) {
    return (tabuleiro[linha][coluna] == 0);
}

// Posiciona navio horizontal
int posicionarNavioHorizontal(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int linha, int coluna) {
    if (coluna + TAM_NAVIO > TAM_TABULEIRO) return 0; // fora do limite

    for (int j = coluna; j < coluna + TAM_NAVIO; j++) {
        if (!posicaoLivre(tabuleiro, linha, j)) return 0; // sobreposição
    }
    for (int j = coluna; j < coluna + TAM_NAVIO; j++) {
        tabuleiro[linha][j] = 3;
    }
    return 1;
}

// Posiciona navio vertical
int posicionarNavioVertical(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int linha, int coluna) {
    if (linha + TAM_NAVIO > TAM_TABULEIRO) return
