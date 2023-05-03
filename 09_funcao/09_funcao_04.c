// Função que retorna o somatorio dos elementos de um vetor.
//
//

#include <stdio.h>

int myFunction(int myNumbers[]) {
  int soma = 0;
  for (int i = 0; i < 6; i++) {
    printf("%d\n", myNumbers[i]);
    soma = soma + myNumbers[i];
  }
  return soma;
}

int main() {
  int somatorio;
  int myNumbers[6] = {10, 20, 30, 40, 50, 60};  
  somatorio = myFunction(myNumbers);
  return 0;
}