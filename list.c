#include "list.h"

void print_list(struct node * n){
  printf("[ ");
  while (n){ //while node exists and next node exists
    printf("%d ", n->i); //print out value of int i
    n = n->next; //look at next node
  }
  printf("]\n");
}

struct node * insert_front(struct node * n, int i){
  struct node * new_node = malloc(sizeof(struct node)); //dynamically allocate space for a new node
  new_node->i = i;
  new_node->next = n;
  return new_node;
}

struct node * free_list(struct node * n){
  struct node * temp;
  while (n){
    temp = n->next;
    printf("freeing node: %d\n", n->i);
    free(n);
    n = temp;
  }
  n = NULL;
  return n;
}

struct node * removeNode(struct node * front, int data){
  struct node * copy = front; //copy of pointer, used for looping
  struct node * prev = NULL; //keeps track of previous node, initial value is null
  while (copy){
    if (copy->i == data){ //if value found
      if (prev){ //if not removing from beginning
        prev->next = copy->next; //if removing from middle or end
        free(copy); //delete node
        return front;
      }
      else{
        front = copy->next; //reassign pointer for front of list
        free(copy); //delete node
        return front;
      }
    }
    prev = copy; //if value not found, advance both prev and copy one forward
    copy = copy->next;
  }
  return front; //return pointer to beginning of list
}


/*#include <stdio.h>
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
  //printf("%p\n", p);
  p->i = i;
  p->next = n;
  return p;
}

struct node * free_list(struct node * n) {
  struct node *p = n;
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
  while(p->next) {
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
}*/
