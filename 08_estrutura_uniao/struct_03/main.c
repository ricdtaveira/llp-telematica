#include <stdio.h>
#include <malloc.h>

typedef struct aluno
{
    char al_nome[25], al_cpf[14];
    unsigned int al_dia: 5,
                 al_mes : 5,
                 al_ano : 11;
    struct aluno *al_proximo; //ponteiro para uma estrutura aluno
} ALUNO;

// ELEMENTO é sinonimo de struct aluno
typedef struct aluno ELEMENTO;

// Função para criar um elemento da lista encadeada.
// Será alocado uma area na memória para a estrutura e
// será retornado um ponteiro para essa área da memória criada.

ELEMENTO *criar_elemento_lista()
{
    ELEMENTO *p;

    p = (ELEMENTO *) malloc (sizeof(ELEMENTO) );

    if (p == NULL) {
        printf("Criação de Elemento da Lista com malloc falhou.\n");
        exit(1);
    }
    p->proximo = NULL;
    return p;
}


int main() {
    printf("Hello, World!\n");
    return 0;
}
