#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include "intrusive_list.h"

/*
Intrusive linked list

a) Implement function IntrusiveList* create_intrusive_list() which allocates memory for the list and returns a pointer to that list. Remember to initialize the header node as it should be in a cyclic doubly linked list.

b) Implement function void add_node(IntrusiveList *list, IntrusiveListNode *node) which takes a node and adds it to the front of the list (so it is pointed by the next in the header). Remember that the list is cyclic. Be also careful not to do weird things to the header node.

c) Implement void remove_node(IntrusiveList *list, IntrusiveListNode *node) which removes a given node from the list. Here you should note that since our list is cyclic and headered, you do not need to worry about special cases when updating the links. You can simply update the next and prev pointers of the appropriate prev and next nodes.


Using intrusive linked list

In this first part a) and b) you will be using the type wrapInt

a) Implement function void add_int(IntrusiveList *list, int i) that will allocate space for the type to store both integer value and links. Use the functions in task 6.1. to handle the list.

b) Implement function void remove_int(IntrusiveList *list, int r) which seeks for a node in the list containing a value equal to r. If there are multiple occurrences, it is enough to remove the first of these (when seeking using next links). Hint: You know that you have searchered the entire list, when the node you are currently inspecting points to the header as the next node.

 

In this second part c), d), and e), you will be using the type wrapNumeric. Notice that the type wrapNumeric contains a union, which means that each element can contain either integer or double value. The field 'type' contains either INT_TYPE or DOUBLE_TYPE (defined as macros) to inform which type of value you should use for that particular element. Now we can store both integers and doubles in the same list.

 

c) Implement function add_numeric(IntrusiveList *list, Numeric num, uint8_t type) which  allocates memory to a WrapNumeric structure and adds it to the list. Remember also to set the type and num fields.

d) Implement function int sum_ints(IntrusiveList *list) which counts the sum of the integer values in the list. So the function has to go through each element in the list. For each element check the type and if it is correct as the value to the sum.

e) Implement function double sum_doubles(IntrusiveList *list) to cont the sum of the double values in the list.


HINT: You will need the information from the course wiki to manage these tasks easier!
*/



int main()
{
/* Implement your own test routines here or see the tests in the test directory*/

    return 0;
}
