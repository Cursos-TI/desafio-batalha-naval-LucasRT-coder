#include <stdio.h>

int main() {

    int matriz[10][10] = {0};   // Declaração da matriz 10x10 

    int navioVertical_x = 1;   // eixo x - coluna 
    int navioVertical_y = 0;   // eixo y - linha 
    int navioLocal_vertical = 3;   // tamanho navio 3 slots
    
    int navioHorizontal_x = 7;    // eixo x - linha
    int navioHorizontal_y = 5;    // eixo y - coluna 
    int navioLocal_horizontal = 5;   // tamanho navio 5 slots

    // Declaração dos navios na diagonal 
    int navioDiagonal_1x = 3;
    int navioDiagonal_1y = 4;
    int navioLocal_Diagonal1 = 4;

    int navioDiagonal_2x = 7;
    int navioDiagonal_2y = 3;
    int navioLocal_Diagonal2 = 3;

    printf("## Batalha Naval do Lucão ## \n"); 

    printf("\n");

    // Posição Navio na Vertical 
    printf("Navio na Vertical na Coluna %d: \n", navioVertical_x);
        for (int i = 0; i < navioLocal_vertical; i++) 
        {
            matriz[navioVertical_y + i][navioVertical_x] = 1; 
            printf("%d, %d \n", navioVertical_y + i, navioVertical_x); 
        }

        printf("\n"); 
        
    // Posição Navio na Horizontal 
    printf("Navio na Horizontal na Coluna %d: \n", navioHorizontal_x);
         for (int j = 0; j < navioLocal_horizontal; j++)
         {
            matriz[navioHorizontal_x][navioHorizontal_y + j] = 1; 
            printf("%d, %d \n", navioHorizontal_x, navioHorizontal_y + j); 
         }

         printf("\n");

    // Posição Navio na Diagonal 1 
    printf("Navio na Diagonal1 na direção [%d, %d]: \n", navioDiagonal_1x, navioDiagonal_1y); 
        for (int k = 0; k < navioLocal_Diagonal1; k++)
        {
            matriz[navioDiagonal_1x + k][navioDiagonal_1y + k] = 3;
            printf("%d, %d \n", navioDiagonal_1x + k, navioDiagonal_1y + k); 
        }

        printf("\n");

    // Posição Navio na Diagonal 2
    printf("Navio na Diagonal2 na Coluna [%d, %d]: \n", navioDiagonal_2x, navioDiagonal_2y); 
        for (int m = 0; m < navioLocal_Diagonal2; m++)
        {
            matriz[navioDiagonal_2x - m][navioDiagonal_2y + m] = 3;
            printf("%d, %d \n", navioDiagonal_2x - m, navioDiagonal_2y + m); 
        }

        // Apresentação das respectivas Linhas e Colunas no Tabuleiro

        printf("\n");

        printf("Exemplificação no Tabuleiro:\n"); 
        for (int linha = 0; linha < 10; linha++)
        {
            for (int coluna = 0; coluna < 10; coluna++) 
            {
                printf("%d", matriz[linha][coluna]); 
            }
            printf("\n");
        }

        /*     Exemplo da Saída Esperada / Exibição da Habilidade 

          // 0 3 0 0 0 0 0 0 0 0
          // 0 3 0 0 0 0 0 0 0 0
          // 0 3 0 0 0 0 0 0 0 0
          // 0 0 0 0 3 0 0 0 0 0
          // 0 0 0 0 0 3 0 0 0 0
          // 0 0 0 0 0 3 3 0 0 0
          // 0 0 0 0 3 0 0 3 0 0
          // 0 0 0 3 0 3 3 3 3 3
          // 0 0 0 0 0 0 0 0 0 0
          // 0 0 0 0 0 0 0 0 0 0
         
          // [0] = Água _ [3] = Navio

        */

    return 0;
}
