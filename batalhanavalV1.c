#include <stdio.h>

int main() {
   
    int tabuleiro[10][10];
    char linha[10] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };

    // Inicializa o tabuleiro com água
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posiciona um navio horizontalmente 
    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;
    tabuleiro[2][5] = 3;

    // Posiciona um navio verticalmente 
    tabuleiro[5][6] = 3;
    tabuleiro[6][6] = 3;
    tabuleiro[7][6] = 3;

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
