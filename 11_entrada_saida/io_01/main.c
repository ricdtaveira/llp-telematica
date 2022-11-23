#include <stdio.h>
#include <windows.h>
#include <conio.h>

void mostrar_Tela01();
void mostrar_Tela02();
void mostrar_Tela03();

void mostrar_Tela01() {
    char opcao;
    do {
        system("cls");
        // Mostrar menu
        printf("Cadastro de Alunos\n");
        printf("------------------\n");
        printf("1-Inserir Aluno\n");
        printf("2-Mostrar Lista\n");
        printf("3-Fim\n");
        printf("Entre opcao-> ");
        opcao = getchar();
        if (opcao == '1')
            mostrar_Tela02();
        else if (opcao == '2')
            mostrar_Tela03();
    } while (opcao != '3');
}

void mostrar_Tela02(){
    char opcao;
    system("cls");
    printf("\nTela_02");
    opcao=getchar();
}

void mostrar_Tela03(){
    char opcao;
    system("cls");
    printf("\nTela_03");
    opcao=getchar();
}

int main() {
    mostrar_Tela01();
    return 0;
}
