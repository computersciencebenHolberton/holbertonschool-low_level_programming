#include "holberton.h"

/**
 *_strpbrk - check the code for Holberton School students.
 *@s: th
 *@accept: th
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int j;

while (*s != '\0')
{
for (j = 0; accept[j] != '\0'; j++)
{
if (*s == accept[j])
return (s);
s++;
}
return (0);
}
}
