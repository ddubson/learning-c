#include <stddef.h>
#include <stdlib.h>
#include <printf.h>

typedef struct node {
    int x;
    struct node *next;
} pnode;

int main() {
    pnode *curr, *head;
    int i;
    head = NULL;
    for (i = 1; i <= 10; i++) {
        curr = (pnode *) malloc(sizeof(pnode));
        curr->x = i;
        curr->next = head;
        head = curr;
    }

    curr = head;
    while (curr) {
        printf("%d\n", curr->x);
        curr = curr->next;
    }

    return 0;
}