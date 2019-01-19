#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

/*
*      Singly linked list with header node
*
* 
*
* The type definition of the list is in linkedList.h as usual. This file also contains the signatures of the functions. Implement the functions in linkedList.c
* 
* a) sList * create_sList(void)  creates the list and returns it to the caller. It has to allocate memory for the header node, initialize the fields in the struct hnode.
* 
* b) int insert_element_s(sList *L, snodeType *p, int value) inserts a new element in the list. The new element must be created and it is placed next element from element p. If p is NULL, then insert in the front of the list.
* 
*    Function returns 0, if everything succeeds, otherwise 1.
*    NOTE:Insert after p.
*
* c) int delete_element_s(sList *L, snodeType *p) deletes the next element from p. If p is NULL, then delete the first element. If implemented correctly, this function works in constant time O(1).
*
*    Remember to free the memory space that is no longer needed.
*    Function returns 0, if the operation succeeds, otherwise 1. Deleting a NULL element is considered unsuccessful.
*    NOTE: Delete after p, not p itself.
*
* d) sList* merge_lists(sList *L1, sList *L2) merges ordered singly linked lists L1 and L2 into a third singly linked list which is ordered too. The function should work in linear time O(n) and return the third list.
* 
*   The original lists are left intact. When a value is found in both lists, include it only once.
*   NOTE: You need to create a new third list and not just move the elements from the original lists. Copy only the value.
*
*/


int main() {


sList *test_list;

test_list=create_sList();

if (test_list == NULL) return 0;
 
if ( insert_element_s(test_list, NULL,7) == 0 )
  {
  printf("Adding first element succeeded\n");
  delete_element_s(test_list, NULL);
  printf("Only element also deleted\n");
  }
else 
  printf("Adding failed\n");

	return 1;
}
