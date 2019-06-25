#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char m;
	char z;
	for (m = 'a'; m <= 'z'; m++)
	{	_putchar(m);
		_putchar('\n');
	}
	return(0);
}
