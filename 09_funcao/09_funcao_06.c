// Função que recebe dois numeros inteiros diferentes e
// retorna o maior.
//

#include <stdio.h>

// Function declaration
int myFunction(int, int);

// The main method
int main() {  
  int result = myFunction(10, 3);  // call the function
  printf("O maior é = %d", result);
  return 0;
}

// Function definition
int myFunction(int x, int y) {
    if (x > y) 
       return x;
    else
       return y;
}