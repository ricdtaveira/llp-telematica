//
// Mostra e opera usando matrizes passadas
// por referencia.
// 

#include <stdio.h>

void mostraMatriz(int &mynumbers, int n);

int main() {
  
  int myNumbers[3][3] = {
                          {10, 20, 30},
                          {40, 50, 60},
                          {70, 80, 90}
                        };

  mostraMatriz(myNumbers[], 3);
  return 0;
}

void mostraMatriz(int *matriz, int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        printf("Matriz[%d][%d]=%d",i,j,matriz[i][j]);
    }
  }
}