#include <stdio.h>
/**
 * main - take the q away
 *
 * Return: Always 0
 */
int main(void)
{
	char n;
	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'e' && n != 'q')
		{
			putchar(n);
		}
	}
	return (0);
}
