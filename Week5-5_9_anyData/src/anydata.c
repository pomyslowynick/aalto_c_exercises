#include <stdio.h>
#include "anydata.h"


/* Return a new AnyData object based on the given input
 */
AnyData setDouble(double value)
{
    (void) value; // replace these lines with your code
    AnyData ad;
    ad.type = UNDEF;
    return ad;
}

AnyData setInt(int value)
{
    (void) value; // replace these lines with your code
    AnyData ad;
    ad.type = UNDEF;
    return ad;
}

AnyData setByte(char value)
{
    (void) value; // replace these lines with your code
    AnyData ad;
    ad.type = UNDEF;
    return ad;
}


void printDouble(double val)
{
    printf("D:%lf", val);
}

void printInt(int val)
{
    printf("I:%d", val);
}

void printByte(char val)
{
    printf("B:%d", val);
}

/* Print the given AnyData value, using one of the above functions
 */
void printValue(AnyData val)
{
   (void) val; // replace these lines with your code
}



/* Calculate sum between array of AnyData objects.
 * first points to the first member of the array
 * last points to the last member of the array
 *
 * Returns the sum as AnyData object. Must be as "small" data type as possible.
 */
AnyData calcSum(AnyData *first, AnyData *last)
{
    (void) first;  // replace these lines with your code
    (void) last;
    AnyData ad;
    ad.type = UNDEF;
    return ad;
}
