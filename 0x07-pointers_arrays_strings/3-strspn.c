#include "holberton.h"

/**
 *_strspn - check the code for Holberton School students.
 *
 *@s: th
 *@accept: th
 *Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
int i, k, counter = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (counter != i)
break;
for (k = 0; s[k] != '\0'; k++)
{
if (s[i] == accept[k])
counter++;
}
}
return (counter);
}
