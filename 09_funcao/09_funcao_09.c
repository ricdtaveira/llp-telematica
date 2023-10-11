//
// Processar um vetor que é passado por referencia
//

#include <stdio.h>

int somatorio_elementos(int *p, int n);

int main()
{

    int v[8] = {2, 5, 15, 20, 34, 80, 95, 120};

    printf("\nO Somatorio é=%d", somatorio_elementos(&v[0], 8));

    printf("\nO Somatorio é=%d", somatorio_elementos(v, 8));

    for (int i = 0; i < 8; i++)
    {

        printf("\nO endereço de v[%d]=%p", i, (v + i));
    }
}

int somatorio_elementos(int *p, int n)
{

    int somatorio = 0;
    for (int i = 0; i < n; i++)
    {

        somatorio += *(p + i); // somatorio =somatorio+ *(p+i);
    }

    return somatorio;
}