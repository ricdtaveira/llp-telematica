//
// Exemplo de passagem de argumentos por valor
//

int maior(int x, int y) {
    int maior;
    if (x > y) 
       maior=x;
    else
       maior=y;
    return maior;
}

void main() {
    int resultado=0;
    int a=200;
    int b=100;
    resultado = maior(25,10);
    printf("O Maior é = %d\n", resultado);
    resultado=maior(a,b);
    printf("O Maior é = %d\n", resultado);
}