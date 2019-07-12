#include "holberton.h"

/**
 *_strncmp - list
 *
 *@s1: th
 *@s2: the
 *@b:tr
 * Return: Always 0.
 */
int _strncmp(char *s1, char *s2, unsigned int b)
{
unsigned int j;

for (j = 0; j <= b && *s1 == *s2 && *s1 != '\0' && *s2 != '\0'; j++)
{
s1++;
s2++;
}
return (j - b);
}
/**
 *_strstr - this
 *@haystack: hgh
 *@needle:kkk
 *Return: p
 */

char *_strstr(char *haystack, char *needle)
{
unsigned int length;
length = 0;
while (needle[length] != '\0')
length++;
while (*haystack != '\0')
{
if (_strncmp(haystack, needle, length) == 0)
return (haystack);
haystack++;
}
return (0);
}
