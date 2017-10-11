#include <stdio.h>

int main(int arg, char* argc[]){

int integer;
int *intpoint;
long LongType;
double *doubleType;
char **CharType;

printf("Size of int: %d bytes \n", sizeof(integer));
printf("Size of int pointer: %d bytes \n", sizeof(intpoint));
printf("Size of Long: %d bytes \n", sizeof(LongType));
printf("Size of double pointer: %d bytes \n", sizeof(doubleType));
printf("Size of pointer to pointer of char: %d bytes \n", sizeof(CharType));


return 0;

}
