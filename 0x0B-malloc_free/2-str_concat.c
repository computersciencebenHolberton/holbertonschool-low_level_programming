#include "holberton.h"
#include <stdlib.h>

/**
 *str_concat - concatenate two strings
 *@s1:first to loop
 *@s2:second to loop
 *Return: Always
 */
char *str_concat(char *s1, char *s2)
{
char *a;
int i;
int n;
int m;
int o;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
for (n = 0; s2[n] != '\0'; n++)
a = malloc((i * sizeof(*s1)) + (n * sizeof(*s2)) + 1);
if (a == NULL)
return (NULL);
for (m = 0, o = 0; m < (i + n + 1); m++)
{
if (m < i)
a[m] = s1[m];
else
a[m] = s2[o++];
}
return (a);
}
