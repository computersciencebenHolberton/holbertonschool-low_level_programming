#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @size: Size of an element
 * @nmemb: Number of elements
 *
 * Return: Pointer to allocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{




  unsigned int i;

  char *x;
  if ((nmemb == 0) || (size == 0))
    return (NULL);
  
  
  x = malloc(size * nmemb);

  if (!x)
    return (NULL);
  for (i = 0; i < nmemb; i++)
    {
      x[i] = 0;
    }

  x[i] = 0;
  return (x);
