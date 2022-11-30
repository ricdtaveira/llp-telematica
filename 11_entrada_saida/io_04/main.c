#include <stddef.h>
#include <stdio.h>
#define FAIL 0
#define SUCCESS 1
#define BLOCKSIZE 512

typedef char DATA;

int copyfile( infile, outfile)
char *infile, *outfile;
{
    FILE *fp1,*fp2;

    DATA block[BLOCKSIZE];

    int num_read;
    if ((fp1 = fopen( infile, "rb" )) == NULL) {
        printf("Error opening file %s for input.\n", infile);
        return FAIL;
    }

    if ((fp2 = fopen( outfile, "wb")) == NULL) {
        printf("Error opening file %s for output.\n", outfile);
        fclose(fp1);
        return FAIL;
    }

    while ((num_read = fread( block, sizeof(DATA), BLOCKSIZE, fp1)) == BLOCKSIZE)
            fwrite( block, sizeof(DATA) , num_read, fp2 );

    fwrite( block, sizeof(DATA) , num_read, fp2 );

    fclose( fp1 );
    fclose( fp2 );

    if (ferror( fp1 )) {
        printf( "Error reading file %s\n", infile );
        return FAIL;
    }
    return SUCCESS;
}

int main() {



}