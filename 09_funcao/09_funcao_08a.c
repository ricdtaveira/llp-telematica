//
// Exemplo de passagem de argumentos por valor
//
#include <stdio.h>

int maior(int x, int y)
{
    int maior;
    if (x > y)
        maior = x;
    else
        maior = y;
    return maior;
}

int main()
{
    int resultado = 0;
    int a = 200;
    int b = 100;
    resultado = maior(25, 10);
    printf("O Maior eh = %d\n", resultado);

    resultado = maior(a, b);
    printf("O Maior eh = %d\n", resultado);
    return 0;
}