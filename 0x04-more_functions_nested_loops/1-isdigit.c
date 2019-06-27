#include "holberton.h"

/**
 *_isdigit - check for lower digit
 *@c: c char
 * Return: Always 1.
 */
int _isdigit(int c)
{

	if (c < '9' && '9' > c)
	{
		return (1);
	}
	return (0);
}
