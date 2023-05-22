#include <stddef.h>
#include <stdio.h>
#define FAIL 0
#define SUCCESS 1
#define LINESIZE 100

int copyfile( infile, outfile)
char *infile, *outfile;
{
    FILE *fp1, *fp2;

    char line[LINESIZE];

    if ((fp1 = fopen(infile, "r" )) == NULL) 
       return FAIL;

    if (fp2 = fopen(outfile, "w" ) == NULL) {        
       fclose(fp1); 
       return FAIL;
    }
    
    while (fgets(line, LINESIZE - 1, fp1) != NULL)
          fputs( line, fp2 );

    fclose( fp1 );
    fclose( fp2 );
    return SUCCESS;
}