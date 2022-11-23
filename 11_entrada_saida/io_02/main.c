#include <stdio.h>
#include <stddef.h>

#define FAIL 0
#define SUCCESS 1

int copyfile( infile, outfile)
    char *infile, *outfile; {
    FILE *fp1, *fp2;

    if (fp1 = fopen( infile, "rb" ) == NULL)
        return FAIL;

    if (fp2=fopen( outfile, "wb" )  == NULL) {
        fclose( fp1 );
        return FAIL;
    }
    while (!feof( fp1 ))
        putc( getc( fp1 ), fp2 );
    fclose( fp1 );
    fclose( fp2 );
    return SUCCESS;


int main() {
    copy ("Teste.txt", "Saida.txt");
    return 0;
}
