#include "holberton.h"
/**
 *binary_to_uint -convert
 *@b:string
 *Return:value
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int i = 0;
while (!b)
return (0);
for (; *b; b++)
{
i <<= 1;
if (*b == '1')
i |= 1;
else if (*b != '0')
return (0);
}
return (i);
}
