#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void print_list(struct node * n) {
  printf("[ ");
  while (n) {
    printf("%d ", n->i);
    n = n->next;
  }
  printf(" ]\n");
}

struct node * insert_front(struct node * n, int i) {
  struct node *p = malloc(sizeof(n));
  p->i = i;
  p->next = n;
  return p;
}

struct node * free_list(struct node * n) {
  while(n) {
    struct node *p = n;
    free(n);
    n = p->next;
  }
  return n;
}
