#include "holberton.h"

/**
 * char *_strcat(char *dest, char *src) - check the code
 * @s1:
 * @s2:
 * @src: the code
 * @dest: the sorce funtion
 * @*_strcat: the fuse
 * Return: (dest);
 */
char *_strcat(char *dest, char *src)
{

  for (; *dest != '\0'; dest++);
for (; *src != '\0'; src++)
{
(*dest = *src);
dest++;
}
(*dest = '\0');
return (dest);
}
