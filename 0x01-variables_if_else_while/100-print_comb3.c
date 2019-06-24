#include <stdio.h>
/**
 * main - the way you do 11
 *
 * Return: Always 0
 */
int main(void)
{
int i;
int m;

for (i = '0'; i <= '8'; i++)
	for (m = '1'; m <= '9'; m++)
		{
			if (i < m)
			{
				if (i != '0' || m != '1')
				{
					putchar(',');
					putchar(' ');
				}
				putchar(i);
				putchar(m);
			}
		}
putchar('\n');
return (0);
}
