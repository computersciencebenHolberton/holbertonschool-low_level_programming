#include "holberton.h"

/**
 * _islower  - check if char is lowers case
 * @c: charecter
 * Returns: 1 if c is lowercase - Returns 0 otherwise
 *
 */
int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	_putchar(c);
	return (0);
}
