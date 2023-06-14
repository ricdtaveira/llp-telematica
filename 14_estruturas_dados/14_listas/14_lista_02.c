//
//
//

#include <stdio.h>
#include <stdlib.h>

// Estrutura para um nó da lista
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Função para imprimir a lista
void printList(Node* head) {
    Node* current = head;
    printf("Lista: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Função para inserir um novo nó no início da lista
void insertAtBeginning(Node** head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
    printf("Elemento %d inserido no início da lista.\n", data);
}

// Função para inserir um novo nó no final da lista
void insertAtEnd(Node** head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
    printf("Elemento %d inserido no final da lista.\n", data);
}

// Função para inserir um novo nó após um nó específico na lista
void insertAfter(Node* prevNode, int data) {
    if (prevNode == NULL) {
        printf("O nó anterior não pode ser nulo.\n");
        return;
    }

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
    printf("Elemento %d inserido após o elemento %d.\n", data, prevNode->data);
}

// Função para excluir um nó específico da lista
void deleteNode(Node** head, int data) {
    Node* temp = *head;
    Node* prev = NULL;

    if (temp != NULL && temp->data == data) {
        *head = temp->next;
        free(temp);
        printf("Elemento %d excluído da lista.\n", data);
        return;
    }

    while (temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Elemento %d não encontrado na lista.\n", data);
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Elemento %d excluído da lista.\n", data);
}

// Função principal
int main() {
    Node* head = NULL;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtBeginning(&head, 5);
    insertAfter(head->next, 15);
    printList(head);

    deleteNode(&head, 20);
    deleteNode(&head, 5);
    printList(head);

    return 0;
}
