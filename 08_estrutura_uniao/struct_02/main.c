// Arrays de Estruturas

#include <stdio.h>
#include <string.h>

struct strucAluno { // Declaração da Estrutura
    int matricula; // Membro matricula (variavel int)
    char nome [50]; // Membro nome (string)
    float n1; // Membro n1 (variavel float)
    float n2; // Membro n2 (variavel float)
    float final; // Membro final (variavel float)
    int faltas; // Membro faltas (variavel int)
    char status; // Membro status (variavel char 'A' Aprovado, 'F' Reprovado Falta, 'N' Reprovado Nota)
};

// Função mostraRegistro
// Mostrar um elemento do Array
// Parametros: arAluno é um array de strucAluno
//             i é o indice da estrutura dentro do array

void mostraRegistro (arAluno, i)

// Array arAluno é um conjunto de estrutura de arAluno
struct strucAluno arAluno[];
int i;
{
    printf("Aluno s1\n");
    printf("Matricula=%d\n",arAluno[i].matricula);
    printf("Nome=%s\n", arAluno[i].nome);
    printf("N1=%2.2f\n",arAluno[i].n1);
    printf("N2=%2.2f\n",arAluno[i].n2);
}

// Função calculaMediaN1
// Parametros : arAluno é um array de strucAluno
//              n é o numero de elementos do array
float calculaMediaN1(arAluno,n)
struct strucAluno arAluno[];
int n;
{
    float soma= 0.0;
    float media;
    int i;
    for(int i=0; i < n; i++) {
        soma = soma + arAluno[i].n1;
    }
    media=soma/n;
    return media;
}

int main() {

// Definir uma variavel do tipo estrutura e em seguida 
// inicializa cada membro da estrutura
    struct strucAluno s2[10];
    float med=0.0;

    s2[0].matricula = 300;
    strcpy(s2[0].nome, "Ana Maria da Fonseca");
    s2[0].faltas = 20;
    s2[0].n1 = 4.5;
    s2[0].n2 = 6.0;
    s2[0].status = ' ';
    s2[0].final = 0.0;
    mostraRegistro(s2,0);
    med=calculaMediaN1(s2,1);
    printf("Media N1=%3.2f",med);
}