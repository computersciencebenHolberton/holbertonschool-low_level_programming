#include "holberton.h"

/**
 * print_alphabet_x10 - printing mulitible alpha
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char i;
	char n;

	for (i = '0'; i <= '9'; i++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
