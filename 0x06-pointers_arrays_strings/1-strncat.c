#include "holberton.h"

/**
 * _strncat - check the code for Holberton School students.
 * @i:
 * @m:
 * @n: - st
 * @dest: - fk
 * @src:- fi
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *i = dest;
int m;
m = 0;

while (*i != '\0')
{
i++;
}
while (*src != '\0' && m < n)
{
*i = *src;
i++;
src++;
m++;
}
return (dest);
}
