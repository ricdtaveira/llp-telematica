#include <stdio.h>
#include <string.h>
 
union Data {
   int i;
   float f;
   char str[20];
};
 
int main( ) {

   union Data data;        

   printf( "Memoria ocupada pela variavel data: %d\n", sizeof(data));
   printf( "Memoria ocupada pela variavel data.i: %d\n", sizeof(data.i));
   printf( "Memoria ocupada pela variavel data.f: %d\n", sizeof(data.f));


   return 0;
}
