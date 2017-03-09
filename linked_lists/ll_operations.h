#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

typedef struct node {
    int x;
    struct node *next;
} pnode;

pnode* populateLinkedList(int);
int get_length(pnode*);
pnode* get_nth(pnode*, int);
void append_data(pnode**, int);

int pop(pnode** headRef);
void delete_list(pnode**);
void insert_nth(pnode**,int,int);
void append_list(pnode**, pnode**);
void front_back_split(pnode*, pnode**, pnode**);
