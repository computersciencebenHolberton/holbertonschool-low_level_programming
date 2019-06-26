#include "holberton.h"

/**
 * print_alphabet - check the code for Holberton School students.
 *@m
 * Return: Always 0
 */
void print_alphabet(void)
{
	char m;

	for (m = 'a' ; m <= 'z' ; m++)
	{
		_putchar(m);
	}
		_putchar('\n');
}
