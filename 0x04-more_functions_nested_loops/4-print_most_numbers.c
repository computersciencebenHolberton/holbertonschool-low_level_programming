#include "holberton.h"

/**
 * print_most_numbers - is very hard
 *
 * Return: 1 if c is lowercase - Returns 0 otherwise
 *
 */
void print_most_numbers(void)
{
int n;

	for (n = '0'; n <= '9'; ++n)
	{
		if (n != '2' && n != '4')
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
