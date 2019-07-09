#include "holberton.h"

/**
 *_strstr - check the code for Holberton School students.
 *@haystack: th
 *@needle: the
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
return (haystack);
while (*haystack != '\0')
{
if (*haystack == *needle)
{
return (haystack);
}
haystack++;
}
if (*haystack == *needle)
{
return (0);
}
return (0);
}
