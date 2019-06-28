#include "holberton.h"

/**
 * _islower - check if char is lowers case
 * @c: charecter
 * Return: 1 if c is lowercase - Returns 0 otherwise
 *
 */
int _islower(int c)
{

	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	return (0);
}
