# Alocação Dinâmica de Memória #

## Introdução ##
>
A alocação dinâmica de memória é um conceito em programação que permite reservar espaço de 
memória durante a execução de um programa. 
>
> 
Diferentemente da alocação estática, em que a quantidade de memória é determinada em tempo 
de compilação, a alocação dinâmica permite que a quantidade de memória seja determinada em tempo 
de execução.

## Quando empregar a Alocação Dinâmica de Memória? ##
>
 A alocação dinâmica de memória é empregada em situações em que o tamanho da memória 
 necessário pode variar durante a execução do programa, ou quando é necessário armazenar 
 uma quantidade desconhecida de dados.
>
>
Há algumas situações comuns em que a alocação dinâmica de memória é utilizada, incluem:
>
> 
1. **Estruturas de dados flexíveis**: Ao lidar com estruturas de dados como listas, filas, pilhas 
e árvores, o tamanho da estrutura pode variar à medida que novos elementos são adicionados 
ou removidos. A alocação dinâmica de memória permite alocar espaço suficiente para essas estruturas conforme necessário.

1. **Entrada de dados do usuário**: Quando um programa precisa ler uma quantidade desconhecida de dados 
do usuário, a alocação dinâmica de memória pode ser utilizada para alocar espaço suficiente para 
armazenar os dados fornecidos.

1. **Manipulação de arquivos grandes**: Ao lidar com arquivos grandes, como imagens, vídeos ou arquivos 
de dados extensos, a alocação dinâmica de memória pode ser usada para alocar espaço suficiente 
para armazenar temporariamente partes do arquivo durante o processamento.

1. **Otimização de recursos**: Em certos casos, a alocação dinâmica de memória pode ser utilizada 
para otimizar o uso de recursos, alocando apenas a quantidade necessária de memória em determinados 
momentos, em vez de reservar uma quantidade fixa de memória desde o início.
>
>
É importante lembrar que, ao utilizar a alocação dinâmica de memória, é responsabilidade do 
programador liberar a memória alocada quando ela não for mais necessária para evitar vazamentos 
de memória. 
>
> 
Isso é feito usando a função free em C (ou funções equivalentes em outras linguagens) para 
desalocar a memória previamente alocada.
>

## As Funções malloc, calloc, e realloc. ##
>
As funções `malloc`, `calloc` e `realloc` são utilizadas em linguagem C para gerenciar a alocação 
de memória dinamicamente. 
>
Cada uma delas possui características específicas:
>
>
1. **`malloc`**: A função `malloc` é usada para alocar uma quantidade específica de bytes de memória. Ela 
retorna um ponteiro para a memória alocada ou `NULL` se a alocação falhar. A sintaxe básica é:
```
void* malloc(size_t size);
```
>
Exemplo de uso da função `malloc`:
>
```
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* array;
    int size = 5;

    // Alocando memória para um array de inteiros
    array = (int*)malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Falha na alocação de memória!\n");
        return 1;
    }

    // Usando o array alocado
    for (int i = 0; i < size; i++) {
        array[i] = i * 2;
        printf("%d ", array[i]);
    }

    // Liberando a memória alocada
    free(array);

    return 0;
}

```
2. **`calloc`**: A função `calloc` também é usada para alocar memória, mas ela inicializa todos os 
bytes alocados com zero. A sintaxe básica é:

```
void* calloc(size_t num, size_t size);

```
Exemplo de uso da função `calloc`:

```
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* array;
    int size = 5;

    // Alocando memória para um array de inteiros com calloc
    array = (int*)calloc(size, sizeof(int));

    if (array == NULL) {
        printf("Falha na alocação de memória!\n");
        return 1;
    }

    // Usando o array alocado
    for (int i = 0; i < size; i++) {
        array[i] = i * 2;
        printf("%d ", array[i]);
    }

    // Liberando a memória alocada
    free(array);

    return 0;
}
```













>