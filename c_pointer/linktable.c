#include "linktable.h"

static Node* create_node()
{
    Node *a = (Node*) malloc(sizeof(Node));
    return a;
}

static Node* make_linktable()
{
    int i = 10;
    Node *new;
    Node *last = NULL;
    while(i-- > 0) {
        if(i == 6) continue;
        printf("insert i=%d\n", i);
        new = create_node();
        new->val = i;
        new->next = last;
        last = new;
    }
    return new;
}

int main(int argc, const char *argv[])
{
    Node *root = make_linktable();
    Node **linkp = &root;
    Node *test = (Node*) malloc(sizeof(Node));
    test->val = 6;
    test->next = NULL;
    s_insert(linkp, test);
    Node *current = *linkp;
    while(current != NULL) {
        printf("val=%d\n", current->val); 
        current = current->next;
    }
    return 0;
}

void s_insert(Node **root, Node *new)
{
    Node *current;
    Node *pre;
    current = *root;
    pre = NULL;
    while(current!=NULL && current->val < new->val) {
        pre = current;
        current = pre->next;
    }
    if(pre == NULL) {
        *root = new;
    } else {
        pre->next = new;
    }
    new->next = current;
}


