#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *print_all -arg
 *@format:types
 *Return: void
 */
void print_all(const char * const format, ...)
{
va_list arguments;
char *str1;
int i;

va_start(arguments, format);
i = 0;
while (format == NULL)
{
printf("\n");
return;
}
while (format[i] != '\0')
{
switch (format[i])
{
case 'c':
printf("%c", (char) va_arg(arguments, int));
break;
case 'i':
printf("%d", va_arg(arguments, int));
break;
case 'f':
printf("%f", (float) va_arg(arguments, double));
break;
case 's':
str1 = va_arg(arguments, char*);
if (str1 != NULL)
{
printf("%s", str1);
break;
}
printf("(nil)");
break;
}
if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
format[i] == 's') && format[(i + 1)] != '\0')
printf(", ");
i++;
}
printf("\n");
}
