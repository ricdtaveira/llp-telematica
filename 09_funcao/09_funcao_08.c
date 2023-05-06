//
// Função com argumentos passados por valor 
// e por referência

void chamada_por_valor(int x) {
    printf("Valor de x= %d", x);
    x=20;
}

void chamada_por_referencia (int *x) {
  *x = 20;
}

int main(){

    int a = 10;

    // Chamada por valor 
    chamada_por_valor(a);
    
    // Chamada por referencia
    chamada_por_referencia(&a);

    // Testar a confirmação da aleração do valor de a

    printf("\nO valor de a= %d", a);

}