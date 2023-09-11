#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct aluno
{
    char al_nome[25], 
    al_cpf[14];
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

// Adicionar elemento na Lista
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

// Imprimir a Lista
void imprimir_lista( e )
ELEMENTO *e;
{
    ELEMENTO *p;
    int c_aluno = 1;

/* Verifica se a lista está vazia
*  Se estiver imprime umamensagem e encerra a função
*/
    if (e ==  NULL) {
        printf ("Lista está vazia");
        return;
    }

    // Imprimir o Endereço do primeiro Elemento
    printf("Endereco do Primeiro Elemento=%p\n\n",e);

/* Percorrer a Lista e mostrar cada elemento  */
    for (p = e; p->al_proximo != NULL; p = p->al_proximo){
        printf("Aluno %d\n", c_aluno);
        printf("Nome= %s\n",p->al_nome);
        printf("Cpf= %s\n",p->al_cpf);
        printf("Data Nascimento= %d-%d-%d\n",p->al_dia,p->al_mes,p->al_ano);
        printf("Proximo=%p\n\n",p->al_proximo);
        c_aluno++;
    };
    // Imprimir o ultimo
    printf("Aluno %d\n", c_aluno);
    printf("Nome= %s\n",p->al_nome);
    printf("Cpf= %s\n",p->al_cpf);
    printf("Data Nascimento= %d-%d-%d\n",p->al_dia,p->al_mes,p->al_ano);
    printf("Proximo=%p\n\n",p->al_proximo);
}


int main() {
    int j=0;
    ELEMENTO *ptr;

    // Incluir na lista 10 estruturas
    for(j=0; j < 10; ++j) {
        ptr = criar_elemento_lista();
        strcpy(ptr->al_nome, "Jose");
        strcpy(ptr->al_cpf, "12345678900");
        ptr->al_ano = 2022;
        ptr->al_mes = 9;
        ptr->al_dia = 20;
        add_element(ptr);
    }

    imprimir_lista(head);

    return 0;
}
