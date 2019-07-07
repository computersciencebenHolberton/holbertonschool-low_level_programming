#include "holberton.h"

/**
 * _strcat - check the code
 *
 *
 * @src: the code
 * @dest: the sorce funtion
 *
 * Return: (p);
 */
char *_strcat(char *dest, char *src)
{
char *p;

p = dest;
for (; *dest != '\0'; dest++)
;
for (; *src != '\0'; src++)
{
(*dest = *src);
dest++;
}
(*dest = '\0');
return (p);
}
