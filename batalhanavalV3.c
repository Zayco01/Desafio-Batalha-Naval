#include <stdio.h>

// Definições do tabuleiro

#define LARGURA 10
#define ALTURA 10
#define NAVIO 3
#define AGUA 0
#define HABILIDADE 5

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

    // Posiciona um navio horizontalmente e a habilidade em forma de cone
    tabuleiro[2][3] = NAVIO;
    tabuleiro[2][4] = NAVIO;
    tabuleiro[2][5] = NAVIO;
	tabuleiro[3][4] = HABILIDADE;
    tabuleiro[4][4] = HABILIDADE;
    tabuleiro[4][3] = HABILIDADE;
	tabuleiro[4][5] = HABILIDADE;
	tabuleiro[5][2] = HABILIDADE;
	tabuleiro[5][3] = HABILIDADE;
	tabuleiro[5][4] = HABILIDADE;
	tabuleiro[5][5] = HABILIDADE;
    tabuleiro[5][6] = HABILIDADE;
     
    

    // Posiciona um navio verticalmente e a habilidade
    tabuleiro[9][7] = NAVIO;
    tabuleiro[9][8] = NAVIO;
    tabuleiro[9][9] = NAVIO;
	tabuleiro[8][8] = HABILIDADE;
    tabuleiro[7][8] = HABILIDADE;
	tabuleiro[7][7] = HABILIDADE;
    tabuleiro[7][9] = HABILIDADE;
    tabuleiro[6][8] = HABILIDADE;


    // Posiciona um navio diagonalmente em forma de cruz
    tabuleiro[9][0] = NAVIO;
    tabuleiro[8][1] = NAVIO;
    tabuleiro[7][2] = NAVIO;
    tabuleiro[8][0] = HABILIDADE;
    tabuleiro[8][2] = HABILIDADE;
    tabuleiro[7][1] = HABILIDADE;
    tabuleiro[9][1] = HABILIDADE;
    

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