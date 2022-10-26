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

int main() {
// Forma de inicializar definir e inicializar uma estrutura
    struct strucAluno s1 = {145, "Jose Maria da Silva", 5.5, 6.6, 7.0, 20, ' '};

// Definir uma variavel do tipo estrutura e em seguida inicialia cada
// membro da estrutura
    struct strucAluno s2;
    s2.matricula = 300;
    strcpy(s2.nome, "Ana Maria da Fonseca");
    s2.faltas = 20;
    s2.n1 = 4.5;
    s2.n2 = 6.0;
    s2.status= ' ';
    s2.final= 0.0;

    printf("Aluno s1\n");
    printf("Matricula=%d\n",s1.matricula);
    printf("Nome=%s\n", s1.nome);
    printf("N1=%2.2f\n",s1.n1);
    printf("N2=%2.2f\n",s1.n2);
    return 0;
}