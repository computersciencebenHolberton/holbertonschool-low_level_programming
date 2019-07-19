#include "holberton.h"
#include <stdlib.h>

/**
 *_calloc - calloc
 *@nmemb: size
 *@size: the size
 *
 *Return: Always
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int count;
int *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
for (count = 0; count < nmemb; count++)
ptr[count] = 0;
return (ptr);
}
