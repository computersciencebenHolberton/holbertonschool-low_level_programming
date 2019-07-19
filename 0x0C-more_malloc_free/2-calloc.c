#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - singed mem
 * @nmemb:thi
 * @size:size
 * Return:NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int loop1;
void *ptr;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(size * nmemb);
if (ptr == NULL)
{
return (NULL);
}
for (loop1 = 0; loop1 < nmemb * size; loop1++)
{
((char *)ptr)[loop1] = 0;
}
return (ptr);
}
