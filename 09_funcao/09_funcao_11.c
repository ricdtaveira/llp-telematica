//
// Mostra e opera usando matrizes passadas
// por referencia.
// 

#include <stdio.h>


int main() {
  
  int myNumbers[3][3] = {
                          {10, 20, 30},
                          {40, 50, 60},
                          {70, 80, 90}
                        };

  mostraMatriz(myNumbers, 3);
  return 0;
}

void mostraMatriz(int (*matriz)[3], int n) 
{
 for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        printf("\nMatriz[%d][%d]=%d",i,j,matriz[i][j]);
    }
  }
}