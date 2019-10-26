#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
  struct node *n = NULL;
  //printf("%lu\n", sizeof(struct node)); //returns 16
  printf("Printing empty list\n");
  print_list(n);
  printf("N currently points to %p\n", n);

  /*
  printf("Printing list with five\n");
  n = insert_front(n, 5);
  print_list(n);
  */

  printf("Adding #s 0-9 to list.\n");
  int i;
  for (i = 0; i < 10; i++){
    n = insert_front(n, i);
  }

  printf("Printing list:\n");
  print_list(n);

  printf("Freeing list.\n");
  n = free_list(n);
  printf("now N points to: %p\n", n);

  printf("Printing list:\n");
  print_list(n);

  printf("Adding #s 10-19 to list.\n");
  for (i = 10; i < 20; i++){
    n = insert_front(n, i);
  }

  printf("Printing list:\n");
  print_list(n);

  printf("Removing nodes:\n");
  printf("N currently points to %p\n", n);
  printf("Removing 19: ");
  n = removeNode(n, 19);
  print_list(n);
  printf("now N points to %p\n", n);
  printf("Removing 19: ");
  n = removeNode(n, 19);
  print_list(n);
  printf("now N points to %p\n", n);
  printf("Removing 17: ");
  n = removeNode(n, 17);
  print_list(n);
  printf("now N points to %p\n", n);
  printf("Removing 15: ");
  n = removeNode(n, 15);
  print_list(n);
  printf("now N points to %p\n", n);
  printf("Removing 10: ");
  n = removeNode(n, 10);
  print_list(n);
  printf("now N points to %p\n", n);
  printf("Removing 18: ");
  n = removeNode(n, 18);
  print_list(n);
  printf("now N points to %p\n", n);

  printf("Freeing list.\n");
  n = free_list(n);
  printf("now N points to: %p\n", n);

  printf("Adding 5 to list.\n");
  n = insert_front(n, 5);
  print_list(n);
  printf("now N points to %p\n", n);
  printf("Removing 5: ");
  n = removeNode(n, 5);
  print_list(n);
  printf("now N points to %p\n", n);

  /*struct node n;
  struct node *p = &n;
  p = NULL;
  int i;
  printf("\nPrinting empty list created:\n");
  print_list(p);
  printf("Inserting value 1 to 9: \n");
  for (i = 1; i < 10; i++) {
    p = insert_front(p, i);
  }
  print_list(p);
  p = removeNode(p, 9);
  print_list(p);
  printf("Freeing all values: \n");
  p = free_list(p);
  print_list(p);*/
  return 0;
}
