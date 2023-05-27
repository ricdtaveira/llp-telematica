#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ALUNOS 4
#define ARQUIVO "alunos.db"

typedef struct {
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float media;
    int faltas;
} Aluno;

void cadastrarAluno(Aluno* aluno) {
    printf("Matrícula: ");
    scanf("%d", &(aluno->matricula));
    
    printf("Nome: ");
    scanf(" %[^\n]", aluno->nome);
    
    printf("Nota 1: ");
    scanf("%f", &(aluno->nota1));
    
    printf("Nota 2: ");
    scanf("%f", &(aluno->nota2));
    
    printf("Faltas: ");
    scanf("%d", &(aluno->faltas));
    
    aluno->media = (aluno->nota1 + aluno->nota2) / 2;
}

void gravarAlunos(Aluno* alunos, int numAlunos) {
    FILE* arquivo = fopen(ARQUIVO, "wb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    
    fwrite(alunos, sizeof(Aluno), numAlunos, arquivo);
    
    fclose(arquivo);
}

void calcularMedias() {
    FILE* arquivo = fopen(ARQUIVO, "rb");
    if (arquivo == NULL) {
        printf("Arquivo não encontrado.\n");
        return;
    }
    
    Aluno aluno;
    while (fread(&aluno, sizeof(Aluno), 1, arquivo) == 1) {
        aluno.media = (aluno.nota1 + aluno.nota2) / 2;
        
        printf("Aluno: %s\n", aluno.nome);
        printf("Média: %.2f\n", aluno.media);
        
        if (aluno.media < 6.0) {
            printf("REPROVADO NOTA\n");
        } else if (aluno.faltas > 10) {
            printf("REPROVADO POR FALTA\n");
        } else {
            printf("APROVADO\n");
        }
        
        printf("\n");
    }
    
    fclose(arquivo);
}

int main() {
    Aluno alunos[MAX_ALUNOS];
    int numAlunos = 0;
    int opcao;
    
    do {
        printf("1 - Cadastrar aluno\n");
        printf("2 - Gravar alunos\n");
        printf("3 - Calcular médias\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                if (numAlunos < MAX_ALUNOS) {
                    cadastrarAluno(&(alunos[numAlunos]));
                    numAlunos++;
                } else {
                    printf("Número máximo de alunos atingido.\n");
                }
                break;
            case 2:
                gravarAlunos(alunos, numAlunos);
                break;
            case 3:
                calcularMedias();
                break;
            case 0:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
        
        printf("\n");
    } while (opcao != 0);
    
    return 0;
}
