# Funções # 

1. O que está errado na seguinte definição de função? Como você corrigiria?

```c
void calcular_media(int a, int b) {
    float media = (a + b) / 2;
    return media;
}
```

2. Qual a diferença entre parâmetros e argumentos em uma função C? Dê um exemplo.

3. Considere a seguinte função:

```c
void trocar(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}
```

Por que essa função não troca efetivamente os valores das variáveis originais? Como você modificaria para que funcione corretamente?

4. Explique a diferença entre passagem por valor e passagem por referência em C. Dê um exemplo de cada.

5. Como você passaria um array como argumento para uma função em C? Forneça um exemplo de declaração de função que aceite um array de inteiros.

6. O que há de errado com o seguinte código? Como você o corrigiria?

```c
int somar_array(int arr[]) {
    int soma = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        soma += arr[i];
    }
    return soma;
}
```

7. Escreva uma função em C que receba um array de inteiros e seu tamanho, e retorne o maior elemento do array.

8. Qual é a saída do seguinte código? Explique o que está acontecendo.

```c
#include <stdio.h>

int incrementar() {
    static int count = 0;
    count++;
    return count;
}

int main() {
    printf("%d ", incrementar());
    printf("%d ", incrementar());
    printf("%d", incrementar());
    return 0;
}
```

9. Como você usaria o retorno de uma função como argumento para outra função? Dê um exemplo.

10. Crie uma função em C que calcule o fatorial de um número usando recursão. Em seguida, mostre como você chamaria essa função e usaria seu retorno em um programa principal.

