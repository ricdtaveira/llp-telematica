// Declaração e Definição de Função
// 
//

#include <stdio.h>

// Declaração de Função
int myFunction(int, int);

// The main method
int main() {  
  int result = myFunction(10, 3);  // call the function
  printf("Result is = %d", result);
  return 0;
}

// Definição de Função
int myFunction(int x, int y) {
  return x + y;
}