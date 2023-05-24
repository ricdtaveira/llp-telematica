//
//
//

#include <stdio.h>
#include <stdlib.h>

struct Pessoa{
    char nome[20];
    unsigned int idade;
    float altura;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    FILE* ptr;
    char* filename = "arq_teste.dat";
    char* modo_gravacao = "w";
    struct Pessoa pessoa = {"Fernando Santos", 42, 1.75};

    //Abre o arquivo para gravação; se ocorrer erro o programa aborta.
    if ((ptr = fopen(filename, modo_gravacao)) == NULL) {
        puts("Erro ao abrir o arquivo!");
        exit(1);
    }

    fwrite(&pessoa, sizeof(struct Pessoa), 1, ptr);

    fclose(ptr);

    return 0;
}