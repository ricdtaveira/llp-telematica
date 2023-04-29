//
//

#include <stdio.h>

// myFunction recebe uma string como parametro
void myFunction(char name[]) {
  printf("Hello %s\n", name);
}

int main() {
  myFunction("Liam Thor");
  myFunction("Jenny Thor");
  myFunction("Anja Thor");
  return 0;
}

