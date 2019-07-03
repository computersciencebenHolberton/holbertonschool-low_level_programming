#include "holberton.h"

/**
 * _puts - the view
 * @str:
 * 
 */
void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
{
_putchar('\n');
}
return (i);
}
