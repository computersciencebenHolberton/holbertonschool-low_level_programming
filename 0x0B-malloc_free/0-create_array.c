#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - malloc
 *@size:size
 *@c:holder
 *Return: Always
 */
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int x;

while (size == 0)
return (0);
p = (char *)malloc(size * sizeof(char));
while (p == 0)
return (0);
for (x = 0; x < size; x++)
p[x] = c;
return (p);
}
