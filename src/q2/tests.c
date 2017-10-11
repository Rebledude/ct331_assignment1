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

  // Test delete after and print
  deleteAfter(l);
  traverse(l);
  printf("\n");

  //Test length
  printf("Number of Elements: %d\n", length(l));

  //Test Pushing to list and print
  push(&l, "new string (4)", 30);
  traverse(l);
  printf("\n");

  //Test Pop and print
  pop(&l);
  traverse(l);
  printf("\n");

  //Test Enqueue
  enqueue(&l, "newer string (5)", 30);
  traverse(l);
  printf("\n");

  //Test Dequeue
  dequeue(&l);
  traverse(l);
  printf("\n");
  
  printf("\nTests complete.\n");
}
