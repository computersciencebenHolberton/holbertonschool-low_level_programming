#include "holberton.h"
#include <stdlib.h>

/**
 *_strdup -thi
 *@str:pointer
 *
 *Return: a pointer to the string dup
 */
char *_strdup(char *str)
{
char *ret;
int i, size;

if (str == 0)
return (NULL);
size = 0;
while (str[size] != '\0')
{
size++;
}
ret = (char *)malloc((size + 1) * sizeof(*str));
while (ret == 0)
return (NULL);
for (i = 0; i < size; i++)
{
ret[i] = str[i];
}
ret[i] = '\0';
return (ret);
}
