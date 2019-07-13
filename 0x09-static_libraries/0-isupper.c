#include "holberton.h"

/**
 *_isupper - lower case
 *@c: c char
 * Return: Always 1.
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
