//
//
//

#include <stdio.h>

int main() {
  int matrix[3][3] = { {1, 4, 2}, {3, 6, 8}, {1, 1, 1 } };

  int i, j;
  int soma = 0;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
     // if (i==j) // Teste da Diagonal Principal
     // if (i < j) // Teste da Parte de Cima da Diagonal Principal
     // if (i > j) // Teste da Parte de Baixo da Diagonal Principal
     // if ((matrix[i][j] % 2) == 0) // Mostra os pares
     // if ((matrix[i][j] % 2) == 1) // Mostra os impares
     // if (i==0) // Testar os elementos da 1a linha
        if (j==0) // Testar os elementos da 1a coluna
         soma = soma + matrix[i][j];
         printf("matrix[%d][%d]=%d ",i, j,matrix[i][j]);
    }
    printf("\n");
  }
  
  printf("Soma=%d", soma);
  
  return 0;
}