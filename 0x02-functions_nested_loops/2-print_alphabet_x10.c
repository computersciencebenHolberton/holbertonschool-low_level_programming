#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char n;
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			putchar(n);
		}
		putchar('\n');
	}
return (0);
}
