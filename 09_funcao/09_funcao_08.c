//
// Função com argumentos passados por valor 
// e por referência

void chamada_por_valor(int x) {
    printf("Valor de x= %d", x);
    x=20;
}

void chamada_por_referencia (int *x) {
  // atribuindo o valor indiretamente usando o endereço recebido 
  *x = 20;
}

void swap(int *x, int *y) {
  int z=0;
  z = *x;
  *x = *y;
  *y = z;
}

int main(){

    int a = 10;
    int b = 20;

    // Chamada por valor 
    chamada_por_valor(a);
    
    // Chamada por referencia
    chamada_por_referencia(&a);

    // Testar a confirmação da alteração do valor de a

    printf("\nO valor de a= %d\n", a);

    // Testar a função swap
    a=100;
    b=200;
    swap(&a, &b);

    printf("\na=%d\nb=%d",a,b);

}
