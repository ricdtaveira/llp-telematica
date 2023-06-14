//
//
//

#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Função para criar um novo nó
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Função para verificar se a pilha está vazia
int isEmpty(Node* top) {
    return (top == NULL);
}

// Função para empilhar um elemento
void push(Node** top, int data) {
    Node* newNode = createNode(data);
    newNode->next = *top;
    *top = newNode;
    printf("%d foi empilhado.\n", data);
}

// Função para desempilhar um elemento
int pop(Node** top) {
    if (isEmpty(*top)) {
        printf("A pilha está vazia.\n");
        return -1;
    }
    Node* temp = *top;
    int poppedValue = temp->data;
    *top = (*top)->next;
    free(temp);
    return poppedValue;
}

// Função para obter o elemento no topo da pilha
int peek(Node* top) {
    if (isEmpty(top)) {
        printf("A pilha está vazia.\n");
        return -1;
    }
    return top->data;
}

// Função para exibir a pilha
void display(Node* top) {
    if (isEmpty(top)) {
        printf("A pilha está vazia.\n");
        return;
    }
    Node* temp = top;
    printf("Elementos na pilha: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    Node* top = NULL;  // Inicializa a pilha como vazia

    push(&top, 10);
    push(&top, 20);
    push(&top, 30);

    display(top);  // Exibe a pilha: 30 20 10

    printf("Elemento no topo: %d\n", peek(top));  // Elemento no topo: 30

    printf("Elemento desempilhado: %d\n", pop(&top));  // Elemento desempilhado: 30

    display(top);  // Exibe a pilha: 20 10

    return 0;
}
