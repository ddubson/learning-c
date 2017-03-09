#include <stddef.h>
#include <stdlib.h>
#include <printf.h>
#include <assert.h>
#include "ll_operations.h"

void traverse(pnode* head);

int main() {
    pnode *head = populateLinkedList(10);

    // Get length of linked list
    int len = get_length(head);
    printf("Length of linked list: %d\n", len);

    // Get nth node of a linked list
    pnode* nth_node = get_nth(head, 4);
    printf("Node at index 4: %d [%p]\n", nth_node->x, nth_node);
    nth_node = get_nth(head, 7);
    printf("Node at index 7: %d [%p]\n", nth_node->x, nth_node);

    // Insert node at end of list
    pnode** pnode_ptr_ptr = &head;
    printf("Inserting node[20] at end...\n");
    append_data(pnode_ptr_ptr, 20);

    traverse(head);

    printf("Popping head...\n");
    pop(pnode_ptr_ptr);
    traverse(head);

    int pos = 5;
    printf("Inserting node into %d position...\n", pos);
    insert_nth(pnode_ptr_ptr, 34, 5);
    traverse(head);

    pnode* sec_list = populateLinkedList(3);
    printf("Appending list to existing list...\n");
    append_list(pnode_ptr_ptr, &sec_list);
    traverse(head);

    printf("Front back split...\n");
    pnode **front = malloc(sizeof(pnode*));
    pnode **back = malloc(sizeof(pnode*));
    front_back_split(head, front, back);
    printf("List 1: \n");
    traverse(*front);
    printf("List 2: \n");
    traverse(*back);

    printf("Deleting list...\n");
    delete_list(pnode_ptr_ptr);
    traverse(head);

    return 0;
}

void traverse(pnode* head) {
  assert(head != NULL);

  while (head) {
      printf("( %d [%p])", head->x, head);

      if(head->next != NULL) {
        printf(" ->");
      }

      printf("\n");
      head = head->next;
  }
}
