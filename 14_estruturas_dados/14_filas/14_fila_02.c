//
//
//

#include <stdio.h>
#include <stdlib.h>

// Estrutura para um nó da fila
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Estrutura para a fila
typedef struct Queue {
    Node* front;
    Node* rear;
} Queue;

// Função para criar uma nova fila vazia
Queue* createQueue() {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->front = NULL;
    queue->rear = NULL;
    return queue;
}

// Função para verificar se a fila está vazia
int isEmpty(Queue* queue) {
    return (queue->front == NULL);
}

// Função para adicionar um elemento à fila
void enqueue(Queue* queue, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (isEmpty(queue)) {
        queue->front = newNode;
        queue->rear = newNode;
    } else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
    printf("Elemento %d adicionado à fila.\n", data);
}

// Função para remover um elemento da fila
int dequeue(Queue* queue) {
    if (isEmpty(queue)) {
        printf("A fila está vazia.\n");
        return -1;
    }

    Node* temp = queue->front;
    int data = temp->data;
    queue->front = queue->front->next;
    free(temp);

    if (queue->front == NULL) {
        queue->rear = NULL;
    }

    return data;
}

// Função para exibir os elementos da fila
void displayQueue(Queue* queue) {
    if (isEmpty(queue)) {
        printf("A fila está vazia.\n");
        return;
    }

    Node* current = queue->front;
    printf("Elementos na fila: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Função principal
int main() {
    Queue* queue = createQueue();

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    displayQueue(queue);

    int dequeuedElement = dequeue(queue);
    printf("Elemento removido: %d\n", dequeuedElement);
    displayQueue(queue);

    return 0;
}
