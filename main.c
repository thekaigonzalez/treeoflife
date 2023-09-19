// Copyright 2023 Kai D. Gonzalez
#include <stdio.h>

struct _node
{
  struct _node *next;
  int nm;
};

typedef struct _node Node;

void
initialize (Node *n, int number)
{
  n->nm = number;
}

int
numberof (Node *n)
{
  return n->nm;
}

main ()
{
  Node node0;
  Node Ref;
  Node Ref_2;
  node0.next = &Ref;
  node0.next->next = &Ref_2;

  initialize (&node0, 1);
  initialize (node0.next, 2);
  initialize (node0.next->next, 3);

  printf ("Node 0 (origin): %d\n", numberof (&node0));
  printf ("Node 1 (origin): %d\n", numberof (node0.next));
  printf ("Node 1 (origin): %d\n", numberof (node0.next->next));
}
