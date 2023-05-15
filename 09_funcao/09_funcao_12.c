//
//
//
#include <stdio.h>

void print_matriz(int (*matrix)[3], int rows) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < 3; j++) {
            printf("matriz[%d][%d]=%d ", i,j, matrix[i][j]);
        }
        printf("\n");
    }
}

void zera_matriz(int (*matrix)[3], int rows) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < 3; j++) {
            matrix[i][j]=0;
        }
    }
}
int main() {
    int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};
    print_matriz(matriz, 2);
    printf("\n\n");
    zera_matriz(matriz, 2);  
    print_matriz(matriz, 2); 
    return 0;
}
