#include <stdio.h>

int main() {
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    char tabuleiro[10][10];
    int i, j;

    
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = '0';
        }
    }

   
    int linhaNavioHorizontal = 7;
    for (j = 3; j < 6; j++) {
        tabuleiro[linhaNavioHorizontal][j] = '3';
    }

   
    int colunaNavioVertical = 2;
    for (i = 1; i < 4; i++) {
        tabuleiro[i][colunaNavioVertical] = '3';
    }

    int linhadiagonal= 3;
    int colunadiagonal = 3;

    for (i = 0; i < 3; i++) {
        if (linhadiagonal + i < 10 && colunadiagonal + i < 10) { 
            tabuleiro[linhadiagonal + i][colunadiagonal + i] = '3';  
        }
    }
    
    int linhadiagonal1 = 9;  
    int colunadiagonal1 = 0;

    for (i = 0; i < 3; i++) {
        if (linhadiagonal1 - i >= 0 && colunadiagonal1 + i < 10) { 
            tabuleiro[linhadiagonal1 - i][colunadiagonal1 + i] = '3'; 
        }
    }
    



   
    printf("  ");

    for (i = 0; i < 10; i++) {
        printf(" %c", linha[i]);
    }
    printf("\n");

   
    for (i = 0; i < 10; i++) {
        printf("%d ", i); 
        for (j = 0; j < 10; j++) {
            printf(" %c", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}