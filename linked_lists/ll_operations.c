#include "ll_operations.h"

int pop(pnode** headRef) {
    assert(headRef != NULL);

    if(*headRef == NULL) {
      return 0;
    }

    pnode* toPop = *headRef;
    int retVal = toPop->x;
    *headRef = toPop->next;
    free(toPop);

    return retVal;
}


pnode* populateLinkedList(int numOfElements) {
  pnode *head, *curr;
  head = NULL;
  for (int i = 1; i <= numOfElements; i++) {
      curr = (pnode *) malloc(sizeof(pnode));
      curr->x = i;
      curr->next = head;
      head = curr;
  }

  return head;
}

int get_length(pnode* head) {
  int length = 0;
  while(head != NULL) {
    length++;
    head = head->next;
  }

  return length;
}

pnode* get_nth(pnode* head, int index) {
  if(index < 0 || index >= get_length(head)) {
    return NULL;
  }

  int i = 0;
  pnode* nth = NULL;
  do {
    if(index == i) {
      nth = head;
      break;
    } else {
      i++;
      head = head->next;
    }
  } while(head != NULL);

  return nth;
}

void append_data(pnode** headRef, int data) {
  assert(headRef != NULL);

  if(*headRef == NULL) {
    *headRef = (pnode*) malloc(sizeof(pnode));
    (*headRef)->x = data;
    (*headRef)->next = NULL;
    return;
  }

  pnode* head = *headRef;
  while(head->next != NULL) {
    head = head->next;
  }

  pnode* newNode = (pnode*) malloc(sizeof(pnode));
  newNode->x = data;
  newNode->next = NULL;

  head->next = newNode;
}

void delete_list(pnode** headRef) {
  assert(headRef != NULL);

  while(*headRef != NULL) {
    pnode* curr = *headRef;
    *headRef = curr->next;
    free(curr);
  }
}

void insert_nth(pnode** headRef, int data, int n) {
  assert(headRef != NULL);
  assert(n >= 0);

  pnode* head = *headRef;
  pnode* prev = NULL;

  if(head != NULL) {
    int index = 0;
    while(head != NULL) {
      if(n == index) {
        break;
      }

      prev = head;
      head = head->next;
      index++;
    }
  }

  pnode *newNode = (pnode*) malloc(sizeof(pnode));
  newNode->x = data;
  newNode->next = head;
  if(prev != NULL) {
    prev->next = newNode;
  }
}

void append_list(pnode** headRefA, pnode** headRefB) {
  if(headRefA == NULL && headRefB != NULL) {
    headRefA = headRefB;
    return;
  } else if(headRefB == NULL) {
    return;
  }

  pnode* headA = *headRefA;
  while(headA->next != NULL) {
    headA = headA->next;
  }

  headA->next = *headRefB;
}

void front_back_split(pnode* srcList, pnode** frontRef, pnode** backRef) {
  assert(srcList != NULL);
  assert(frontRef != NULL && backRef != NULL);

  int len = get_length(srcList);
  int splitPoint = 0;
  if(len % 2 == 0) {
    splitPoint = (int)len / 2;
  } else {
    splitPoint = (int)((len / 2) + 1);
  }

  printf("splitPoint: %d\n", splitPoint);

  pnode* head = srcList;
  // Get address of the original head node
  printf("frontRef: %p\n", *frontRef);

  int index = 0;
  while(index != splitPoint) {
    head = head->next;
    index++;
  }

  pnode *secHead = head->next;
  head->next = NULL;
  *frontRef = srcList;
  *backRef = secHead;
  printf("front: %p\n", *frontRef);
  printf("back: %p\n", *backRef);
  /*
  *backRef = head->next;
  head->next = NULL;
*/
}
