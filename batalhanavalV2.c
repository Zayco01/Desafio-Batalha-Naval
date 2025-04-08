#include <stdio.h>

// Definições do tabuleiro

#define LARGURA 10
#define ALTURA 10
#define NAVIO 3
#define AGUA 0

int main() {

	// Declaração do tabuleiro

    int tabuleiro[LARGURA][ALTURA];
    char linha[10] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };

    // Inicializa o tabuleiro com água
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    // Posiciona um navio horizontalmente 
    tabuleiro[2][3] = NAVIO;
    tabuleiro[2][4] = NAVIO;
    tabuleiro[2][5] = NAVIO;

    // Posiciona um navio verticalmente 
    tabuleiro[5][6] = NAVIO;
    tabuleiro[6][6] = NAVIO;
    tabuleiro[7][6] = NAVIO;

	// Posiciona um navio diagonalmente
	tabuleiro[9][0] = NAVIO;
	tabuleiro[8][1] = NAVIO;
	tabuleiro[7][2] = NAVIO;

	tabuleiro[0][9] = NAVIO;
	tabuleiro[1][8] = NAVIO;
	tabuleiro[2][7] = NAVIO;

    // Exibe o cabeçalho das colunas
    printf("   ");
    for (int h = 0; h < 10; h++) {
        printf("  %c ", linha[h]);
    }
    printf("\n");

    // Exibe o tabuleiro
    for (int i = 0; i < 10; i++) {
        printf("%2d |", i + 1);
        for (int j = 0; j < 10; j++) {
            printf(" %d |", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}