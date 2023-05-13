//
//
//

#include <string.h>

void imprimir_vogal(char *str);

int main() {

    char nome[]= "Maria de Jesus Amada por todos";
    
    imprimir_vogal(nome);

}

void imprimir_vogal(char *letra){

    for(int i=0; i < strlen(letra); i++){
        printf("%c", *(letra+i));
    }

}