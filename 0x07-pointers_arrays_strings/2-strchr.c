#include "holberton.h"

/**
 * _strchr - the view
 *@s: the
 *@c: th
 * Return: Always 0.
 */
char *_strchr(char *s, char c)

{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (0);
}
