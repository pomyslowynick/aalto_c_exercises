#include "source.h"
#include <stdio.h>

/* This exercise is from Object-Oriented Programming with Java, week 2
 * Write a function printTree(int height) that prints a tree using stars and whitespaces. You don't have to worry about heights below three.
 * A tree consists of a triangle of given height and a rectangle that is two stars tall and three stars wide. 
 * printTree(5);
 *     *
 *    ***
 *   *****
 *  *******
 * *********
 *    ***
 *    ***
 * 
 * printTree(10);
 *          *
 *         ***
 *        *****
 *       *******
 *      *********
 *     ***********
 *    *************
 *   ***************
 *  *****************
 * *******************
 *         ***
 *         ***
 * */

/* You may modify the main function as you wish. It is not tested by the tmc server*/

int main(void) {
    int height;
    printf ("Give a tree height greater than 3:\n");
    scanf("%d",&height);
    if (height > 3)
       printTree(height);
    else
        printf ("The height has to be greater than 3. You gave a value %d, which is too small.\n", height);
    return 0;
}
