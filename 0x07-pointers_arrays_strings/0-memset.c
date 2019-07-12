#include "holberton.h"

/**
 * _memset - view
 * @s: the address of memory to print
 * @n: the size of the memory to print
 * @b: the view
 * Return: (s)
 */
char *_memset(char *s, char b, unsigned int n)
{

while (n--)
{
*(s + n) = b;
}
return (s);
}
