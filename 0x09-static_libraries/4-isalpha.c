#include "holberton.h"
/**
 * _isalpha - entry shows the rules
 *@c: show me the money
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{

	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
