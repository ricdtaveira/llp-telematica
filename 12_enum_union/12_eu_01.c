#include <stdio.h>

// Definindo o enum para representar diferentes tipos de dados
enum TipoDado {
    INTEIRO,
    PONTO_FLUTUANTE,
    CARACTERE
};

// Definindo a union para armazenar os diferentes tipos de dados
union Dado {
    int inteiro;
    float pontoFlutuante;
    char caractere;
};

// Função para exibir o valor armazenado na union, de acordo com o tipo especificado
void exibirDado(union Dado dado, enum TipoDado tipo) {
    switch (tipo) {
        case INTEIRO:
            printf("Valor inteiro: %d\n", dado.inteiro);
            break;
        case PONTO_FLUTUANTE:
            printf("Valor de ponto flutuante: %f\n", dado.pontoFlutuante);
            break;
        case CARACTERE:
            printf("Valor de caractere: %c\n", dado.caractere);
            break;
        default:
            printf("Tipo de dado inválido!\n");
    }
}

int main() {
    // Criando uma variável do tipo enum para especificar o tipo de dado
    enum TipoDado tipo = INTEIRO;

    // Criando uma variável do tipo union
    union Dado dado;

    // Atribuindo valores à union com base no tipo especificado
    switch (tipo) {
        case INTEIRO:
            dado.inteiro = 10;
            break;
        case PONTO_FLUTUANTE:
            dado.pontoFlutuante = 3.14;
            break;
        case CARACTERE:
            dado.caractere = 'A';
            break;
        default:
            printf("Tipo de dado inválido!\n");
            return 0;
    }

    // Exibindo o valor armazenado na union
    exibirDado(dado, tipo);

    return 0;
}
