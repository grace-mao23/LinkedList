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
  struct node *p = malloc(sizeof(struct node));
  //printf("%p", p);
  p->i = i;
  p->next = n;
  return p;
}

struct node * free_list(struct node * n) {
  struct node *p;
  while(n) {
    //printf("%p\n", p);
    p = n->next;
    //n-> next = 0;
    free(n);
    n = p;
  }
  n=NULL;
  //p=NULL;
  return n;
}

struct node * removeNode(struct node *front, int data) {
  struct node *p = front;
  struct node *prev = NULL;
  while (p) {
    if (p->i == data) {
      if (prev){
        prev->next = p->next;
        free(p);
        return front;
      } else {
        front = p->next;
        free(p);
        return front;
      }
    }
    prev=p;
    p=p->next;
  }
  return front;
}
