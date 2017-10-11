#include <stdio.h>
#include "genericLinkedList.h"

void runTests(){
  printf("Tests running...\n");

  void printChar(void* data){
	printf("%c\n",*(char*)data);
}
void printInt(void* data){
	printf("%d\n",*(int*)data);
}
void printString(void* data){
	printf("%s\n",(char*)data);

  printf("\nTests complete.\n");
}
