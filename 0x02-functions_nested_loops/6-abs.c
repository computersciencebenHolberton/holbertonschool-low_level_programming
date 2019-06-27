#include "holberton.h"

/**
 * main - the front door
 *@n: variable
 * Return: Always 0.
 */
int _abs(int n)
	{
		if (n < 0)
		{
			n *= -1;
			return(n);
		}
		else 
		{
			return(n);
		}
}
