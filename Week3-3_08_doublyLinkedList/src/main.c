#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"


/*
Doubly linked list

Consider a doubly linked list, which contains integer values. One element in doubly linked list has a 
pointer to both of its neighbours in the list. Usually called prev and next.  This is not a circular list, 
so the field next in the last element has value NULL and the field prev in the first element has value NULL.

You can find the type definition dList in header file linkedList.h.

a) Write a function dList* insert_element_d (dList *L, dList *p, int value) which adds an integer value into 
the list L next to the element p. If p is NULL, then insert the element in the beginning of the list. 
L points to the beginning of the list, or NULL if the list is empty. Functions always returns pointer 
to the beginning of the list, that is pointer to the first element.

If programmed correctly the function works in constant time O(1).

b) Write a function int print_elements_d ( dList * L) which prints the integers in the list one per line 
so that the values are printed followed by a line break. Notice that the printing of the list must not 
have side effects. If L is NULL, return 1 else return 0.

c) Write a function dList* delete_element_d (dList *L, dList *p) which deletes the element pointed by p. 
The function returns a pointer to the start of the list.

If programmed correctly the function works in constant time O(1).

d) Write a function dList* order_list_d (dList *L) which orders the values in the doubly linked list L 
from the smallest to the largest. The function returns 0, if everything succeeds, otherwise 1.

*/

int main() {

     dList * numbers = NULL;


     numbers = insert_element_d (numbers, NULL, 10);
     printf("Phase 1: ");
     print_elements_d(numbers);
     numbers = insert_element_d (numbers, NULL, 15);
     numbers = insert_element_d (numbers, numbers->next, 4);

     printf("Phase 2: ");
     print_elements_d(numbers);
     if (order_list_d(numbers)==0) printf("Ordering succeeded, First element is %d\n",numbers->val);
     else  printf("Ordering failed, First element is %d\n", numbers ->val);

     printf("Phase 3: ");
     print_elements_d(numbers);

     numbers = delete_element_d(numbers, numbers);
     printf("Phase 4: ");
     print_elements_d(numbers);
     numbers = delete_element_d(numbers, numbers->next);
     numbers = delete_element_d(numbers, numbers);
     numbers = delete_element_d(numbers, numbers);

     printf("Phase 5: ");
     print_elements_d(numbers);

	return 1;
}
