#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main() {
  int time = 20;
  char saudacao[20];
  (time < 18) ? strcpy("Good day.",saudacao) : strcpy("Good evening.",saudacao);
  printf("%s",saudacao);
  return 0;
}
