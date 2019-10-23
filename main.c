#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
  struct node n;
  struct node *p = &n;
  p->i = 0;
  p->next = 0;
  int i;
  print_list(p);
  for (i = 1; i < 10; i++) {
    p = insert_front(p, i);
  }
  print_list(p);
  free_list(p);
  print_list(p);
  return 0;
}
