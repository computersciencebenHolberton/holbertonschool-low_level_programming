#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - memory
 *@b: Argument of memory
 *Return:exit 98
 */
void *malloc_checked(unsigned int b)
{
void *pt = malloc(b);

if (pt == NULL)
exit(98);
return (pt);
}
