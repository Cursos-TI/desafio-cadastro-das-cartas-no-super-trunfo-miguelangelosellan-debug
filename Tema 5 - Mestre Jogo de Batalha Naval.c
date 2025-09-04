#include <stdio.h>

#define TAM_TABULEIRO 10
#define TAM_NAVIO 3
#define TAM_HABILIDADE 5 // tamanho fixo das matrizes de habilidade

// ===================== TABULEIRO ===================== //
void inicializarTabuleiro(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO]) {
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            tabuleiro[i][j] = 0; // 0 = água
        }
    }
}

void exibirTabuleiro(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO]) {
    printf("\n=== Tabuleiro de Batalha Naval ===\n\n");

    // Cabeçalho com índices de coluna
    printf("   ");
    for (int j = 0; j < TAM_TABULEIRO; j++) {
        printf("%2d ", j);
    }
    printf("\n");

    for (int i = 0; i < TAM_TABULEIRO; i++) {
        printf("%2d ", i); // índice da linha
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            if (tabuleiro[i][j] == 0)
                printf(" ~ "); // água
            else if (tabuleiro[i][j] == 3)
                printf(" N "); // navio
            else if (tabuleiro[i][j] == 5)
                printf(" * "); // habilidade
            else
                printf(" ? "); // fallback
        }
        printf("\n");
    }
}

// ===================== NAVIOS ===================== //
int posicaoLivre(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int linha, int coluna) {
    return (tabuleiro[linha][coluna] == 0);
}

int posicionarNavioHorizontal(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int linha, int coluna) {
    if (coluna + TAM_NAVIO > TAM_TABULEIRO) return 0;
    for (int j = coluna; j < coluna + TAM_NAVIO; j++) {
        if (!posicaoLivre(tabuleiro, linha, j)) return 0;
    }
    for (int j = coluna; j < coluna + TAM_NAVIO; j++) {
        tabuleiro[linha][j] = 3;
    }
    return 1;
}

int posicionarNavioVertical(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int linha, int coluna) {
    if (linha + TAM_NAVIO > TAM_TABULEIRO) return 0;
    for (int i = linha; i < linha + TAM_NAVIO; i++) {
        if (!posicaoLivre(tabuleiro, i, coluna)) return 0;
    }
    for (int i = linha; i < linha + TAM_NAVIO; i++) {
        tabuleiro[i][coluna] = 3;
    }
    return 1;
}

// ===================== HABILIDADES ===================== //
// Cria matriz de habilidade em forma de cone
void criarCone(int habilidade[TAM_HABILIDADE][TAM_HABILIDADE]) {
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            habilidade[i][j] = 0;
        }
    }
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = TAM_HABILIDADE/2 - i; j <= TAM_HABILIDADE/2 + i; j++) {
            if (j >= 0 && j < TAM_HABILIDADE) {
                habilidade[i][j] = 1;
            }
        }
    }
}

// Cria matriz de habilidade em forma de cruz
void criarCruz(int habilidade[TAM_HABILIDADE][TAM_HABILIDADE]) {
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            habilidade[i][j] = 0;
        }
    }
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        habilidade[i][TAM_HABILIDADE/2] = 1;
        habilidade[TAM_HABILIDADE/2][i] = 1;
    }
}

// Cria matriz de habilidade em forma de octaedro (losango)
void criarOctaedro(int habilidade[TAM_HABILIDADE][TAM_HABILIDADE]) {
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            habilidade[i][j] = 0;
        }
    }
    int centro = TAM_HABILIDADE / 2;
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        int desloc = (i <= centro) ? i : TAM_HABILIDADE - 1 - i;
        for (int j = centro - desloc; j <= centro + desloc; j++) {
            habilidade[i][j] = 1;
        }
    }
}

// Sobrepõe a habilidade no tabuleiro (usa valor 5 para marcar efeito)
void aplicarHabilidade(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO],
                       int habilidade[TAM_HABILIDADE][TAM_HABILIDADE],
                       int linhaOrigem, int colunaOrigem) {
    int centro = TAM_HABILIDADE / 2;

    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            if (habilidade[i][j] == 1) {
                int linhaTab = linhaOrigem + (i - centro);
                int colunaTab = colunaOrigem + (j - centro);

                // Verifica limites do tabuleiro
                if (linhaTab >= 0 && linhaTab < TAM_TABULEIRO &&
                    colunaTab >= 0 && colunaTab < TAM_TABULEIRO) {
                    
                    // Marca área de efeito sem apagar navio
                    if (tabuleiro[linhaTab][colunaTab] == 0) {
                        tabuleiro[linhaTab][colunaTab] = 5;
                    }
                }
            }
        }
    }
}

// ===================== MAIN ===================== //
int main() {
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO];
    inicializarTabuleiro(tabuleiro);

    // Posiciona navios
    posicionarNavioHorizontal(tabuleiro, 2, 2);
    posicionarNavioVertical(tabuleiro, 6, 5);

    // Cria matrizes de habilidades
    int cone[TAM_HABILIDADE][TAM_HABILIDADE];
    int cruz[TAM_HABILIDADE][TAM_HABILIDADE];
    int octaedro[TAM_HABILIDADE][TAM_HABILIDADE];

    criarCone(cone);
    criarCruz(cruz);
    criarOctaedro(octaedro);

    // Aplica habilidades em pontos específicos
    aplicarHabilidade(tabuleiro, cone, 1, 1);       // Cone no canto superior esquerdo
    aplicarHabilidade(tabuleiro, cruz, 5, 5);       // Cruz no centro
    aplicarHabilidade(tabuleiro, octaedro, 8, 8);   // Octaedro no canto inferior direito

    // Exibir resultado final
    exibirTabuleiro(tabuleiro);

    return 0;
}
