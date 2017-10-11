#include <stdio.h>
#include "tests.h"
#include "linkedList.h"

void runTests(){
  printf("Tests running...\n");
  listElement* l = createEl("Test String (1).", 30);
  //printf("%s\n%p\n", l->data, l->next);
  //Test create and traverse
  traverse(l);
  printf("\n");

  //Test insert after
  listElement* l2 = insertAfter(l, "another string (2)", 30);
  insertAfter(l2, "a final string (3)", 30);
  traverse(l);
  printf("\n");

  // Test delete after
  deleteAfter(l);
  traverse(l);
  printf("\n");

  //Test length()
  int lengthTest = length(1);
  printf("length = %d ", length);
   printf("\n");

   //Test push
   push(&1,"Push Test", 30);
   traverse(1);
   printf("\n");

   //Test pop
   listElement* popTest = pop(&1);
   traverse(1);
   printf("\n");

   //Test enqueue
   enqueue(&1,"Enqueue test", 30);
   traverse(1);
   printf("\n");

   //test Dequeue
   listElement* Dequeue = dequeue(&1);
   traverse(1);
   printf("\n");

  printf("\nTests complete.\n");
}
