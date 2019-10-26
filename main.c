#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
  struct node *n = NULL;
  //printf("%lu\n", sizeof(struct node)); //returns 16
  printf("Printing empty list\n");
  print_list(n);

  printf("Adding 0 to 9: \n");
  int i;
  for (i = 0; i < 10; i++){
    n = insert_front(n, i);
  }

  printf("Printing list:\n");
  print_list(n);

  printf("Freeing list.\n");
  n = free_list(n);
  
  printf("Printing list:\n");
  print_list(n);

  printf("Adding 1 to 10 to list.\n");
  for (i = 1; i < 11; i++){
    n = insert_front(n, i);
  }

  printf("Printing list:\n");
  print_list(n);

  printf("Removing nodes:\n");
  
  printf("Removing 10: ");
  n = removeNode(n, 10);
  print_list(n);

  printf("Attempting to remove 20: ");
  n = removeNode(n, 20);
  print_list(n);
  
  printf("Removing 7: ");
  n = removeNode(n, 7);
  print_list(n);
  
  printf("Removing 5: ");
  n = removeNode(n, 5);
  print_list(n);
  
  printf("Removing 1: ");
  n = removeNode(n, 1);
  print_list(n);

  printf("Freeing list.\n");
  n = free_list(n);
  
  return 0;
}
