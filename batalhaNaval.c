#include <stdio.h>

int main() {

    int matriz[10][10] = {0};   // Declaração da matriz 10x10 

    int navioVertical_x = 1;   // eixo x - coluna 
    int navioVertical_y = 0;   // eixo y - linha 
    int navioLocal_vertical = 3;   // tamanho navio 3 slots
    
    int navioHorizontal_x = 7;    // eixo x - linha
    int navioHorizontal_y = 5;    // eixo y - coluna 
    int navioLocal_horizontal = 5;   // tamanho navio 5 slots

    printf("## Batalha Naval do Lucão ## \n"); 

    printf("\n");

    // Posição Navio na Vertical 
    printf("Navio na Vertical na Coluna %d: \n", navioVertical_x);
        for (int i = 0; i <navioLocal_vertical; i++) 
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


        /*     Exempo da Saída Esperada / Exibição da Habilidade 

          // 3 0 0 0 0 0 0 0 0 0
          // 3 0 0 0 0 0 0 0 0 0
          // 3 0 0 0 0 0 0 0 0 0
          // 0 0 0 0 0 0 0 0 0 0
          // 0 0 0 0 0 0 0 0 0 0
          // 0 0 0 0 0 0 0 0 0 0
          // 0 0 0 0 0 0 0 0 0 0
          // 0 0 0 0 0 3 3 3 3 3
          // 0 0 0 0 0 0 0 0 0 0
          // 0 0 0 0 0 0 0 0 0 0
         
          // [0] = Água _ [3] = Navio

        */

   

    return 0;
}
