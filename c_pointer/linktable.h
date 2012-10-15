#include <stdio.h>
#include <stdlib.h>

typedef struct node_s {
    struct node_s *next;
    int val;
} Node;

extern void s_insert(Node **p, Node *new);
