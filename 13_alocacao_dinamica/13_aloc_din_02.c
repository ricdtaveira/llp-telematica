#include <stdio.h>
#include <stdlib.h>

int main(){

	int qtd, *p;

	printf("Informe a quantidade de elementos para o vetor: ");
	scanf("%d", &qtd);

	p = (int*)malloc(qtd * sizeof(int)); //3 x 4 == 12 bytes

	for(int i = 0; i < qtd; i++){
		printf("Informe o valor para a posição %d do vetor: ", i);
		scanf("%d", &p[i]);
	}


	for(int i = 0; i < qtd; i++){
		printf("No vetor 'numeros[%d]' está o valor %d: \n", i, p[i]);
	}

	printf("A variável 'p' ocupa %ld bytes em memória.\n", qtd * sizeof(int));

	//liberar a memória (desalocar)
	free(p);
	p = NULL; //medida de segurança


	return 0;
}
