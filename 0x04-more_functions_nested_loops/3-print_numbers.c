#include "holberton.h"

/**
 * print_numbers - check if char is lowers case
 *
 * Return: 1 if c is lowercase - Returns 0 otherwise
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; ++n)
	{
		_putchar(n + '0');
	}
		_putchar('\n');
}
