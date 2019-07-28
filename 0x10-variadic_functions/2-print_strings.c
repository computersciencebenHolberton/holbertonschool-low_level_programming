#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - thi
 *@separator:separator
 *@n:unsigned
 *va_list valist:list 
 *Return: Always
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int i;
char *str;

va_start(valist, n);
for (i = 0; i < n; i++)
{
if (i && separator)
printf("%s", separator);
str = va_arg(valist, char *);
if (str)
printf("%s", str);
else
printf("(nil)");
}
va_end(valist);
printf("\n");
}
