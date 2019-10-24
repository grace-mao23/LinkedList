#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void print_list(struct node * n) {
  printf("[ ");
  while (n->next && n) {
    printf("%d ", n->i);
    n = n->next;
  }
  printf(" ]\n");
}

struct node * insert_front(struct node * n, int i) {
  struct node *p = malloc(sizeof(n));
  //printf("%p\n", p);
  p->i = i;
  p->next = n;
  return p;
}

struct node * free_list(struct node * n) {
  struct node *p = n;
  while(n->next) {
    //printf("%p\n", p);
    p = p->next;
    //n-> next = 0;
    free(n);
    n = p;
  }
  n=NULL;
  return p;
}

struct node * removeNode(struct node *front, int data) {
  struct node *p = front;
  struct node *prev;
  prev->next = 0;
  while(p->next) {
    if (p->i == data) {
      prev->next = p->next;
      free(p);
      return front;
    }
    p=p->next;
  }
  return front;
}
