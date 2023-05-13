//
//
//

#include <stdio.h>

void print_matrix(int (*matrix)[3], int rows) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < 3; j++) {
            printf("matrix[%d][%d]=%d ", i,j, matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    print_matrix(matrix, 2);
    return 0;
}
