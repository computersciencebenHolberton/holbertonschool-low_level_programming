#include "holberton.h"

/**
 * print_rev - the view
 * @s: perameter
 *
 */
void print_rev(char *s)
{
int i;
int n;
for (i = 0; s[i] != '\0'; i++)
{
}
for (n = i - 1; n >= 0; n--)
{
_putchar (s[n]);
}
_putchar ('\n');
}
