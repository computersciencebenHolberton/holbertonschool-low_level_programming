#include "holberton.h"

/**
 *_memcpy - how word
 *@n: the
 *@dest: the size of the memory to print
 *@src: the
 *Return: Always 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
