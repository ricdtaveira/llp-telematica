// Esse programa faz uma copia de um arquivo para outro

#include <stdio.h>
#include <stddef.h>

#define FAIL 0
#define SUCCESS 1

// Função que copia um arquivo para outro arquivo
// Os arquivos estam sendo abertos em modo binário porque estamos lendo
// individualmente cada caracter individualmente, e não estamosinteressados
// com a estrutura de linha dos arquivos.

int copyfile( infile, outfile)
char *infile, *outfile;
{
    FILE *fp1, *fp2;

    if ((fp1 = fopen( infile, "rb")) == NULL)
        return FAIL;

    if ((fp2 = fopen( outfile, "wb" )) == NULL) {
        fclose( fp1 );
        return FAIL;
    }

    // Enquanto não encontrar o final do arquivo fp1
    // a função getc lê um caracter do arquivo fp1, retorna esse
    // caracter para ser gravado pela função putc em no arquivo fp2
    while (!feof( fp1))
        putc( getc( fp1 ), fp2 );

    fclose( fp1 );
    fclose( fp2 );

    return SUCCESS;
}

int main() {
    copyfile("teste.txt", "copia.txt");
    printf("Hello, World!\n");
    return 0;
}
