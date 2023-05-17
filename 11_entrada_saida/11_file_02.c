//
//
//

#include <stdio.h>

FILE *fptr;

int main()
{
    // Open a file in writing mode
    fptr = fopen("filename.txt", "a");

    // Write some text to the file
    fprintf(fptr, "\nContinuando .....");

    // Close the file
    fclose(fptr);
}