#include "holberton.h"

/**
 * void _puts - the view
 * @str:
 * Return:
 */
_puts(char *str)
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
