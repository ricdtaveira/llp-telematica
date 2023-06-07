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

   // A ultima atribuição é o valor que fica na variavel union 
   strcpy( data.str, "C Programming");
   data.i = 10;
   data.f = 220.5;
   
   printf( "data.i : %d\n", data.i);
   printf( "data.f : %f\n", data.f);
   printf( "data.str : %s\n", data.str);

   return 0;
}
