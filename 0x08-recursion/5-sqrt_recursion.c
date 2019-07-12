#include "holberton.h"
#include <stdio.h>
/**
 * helper - very long
 * @n:thi
 * @m:the
 *
 * Return: Always
 */
int helper(int n, int m)
{
if ((m * m) < n)
{
return (helper(n, ++m));
}
if ((m * m) == n)
{
return (m);
}
return (-1);
}
/**
 * _sqrt_recursion - thi
 * @n:thi
 * Return: Always
 */
int _sqrt_recursion(int n)
{
return (helper(n, 1));
}
