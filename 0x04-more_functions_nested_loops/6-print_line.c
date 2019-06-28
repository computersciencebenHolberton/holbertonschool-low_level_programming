#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void more_numbers(void)
{
        int n;
        int m;

        for (m = 0; m <= 9; ++m)
        {
		for (n = 0; n <= 14; ++n)
		{
			if (n > 9)
                        {
				_putchar((n / 10) + '0');
                        }
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
        }
}



