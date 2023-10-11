#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int hora = 20;
  char saudacao[20];
  (hora < 18) ? strcpy(saudacao, "Good day.") : strcpy(saudacao, "Good evening.");
  printf("%s", saudacao);
  return 0;
}
