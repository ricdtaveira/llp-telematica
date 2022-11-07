#include <stdio.h>
#include <malloc.h>
#include <string.h>

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
static ELEMENTO *head;

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
    p->al_proximo = NULL;
    return p;
}

void add_element( e )
ELEMENTO *e;
{
    ELEMENTO *p;
/* Se o primeiro elemento (o cabeça) não foi criado
*  cria-o agora.
*/
    if (head ==  NULL) {
        head = e;
        return;
    }
/* Se não, procurar o ultimo elemento da lista */
    for (p = head; p->al_proximo != NULL; p = p->al_proximo);

/* null statement */
    p->al_proximo = e;
}

static ELEMENTO *head;

int main() {
    int j=0;
    ELEMENTO *ptr;
    for(j=0; j < 10; ++j) {
        ptr = criar_elemento_lista();
        strcpy(ptr->al_nome, "Jose");
        strcpy(ptr->al_cpf, "12345678900");
        ptr->al_ano = 2022;
        ptr->al_mes = 9;
        ptr->al_dia = 20;
        add_element(ptr);
    }
    return 0;
}
