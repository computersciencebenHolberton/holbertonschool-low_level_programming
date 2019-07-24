#include "function_pointers.h"
/**
 *int_index - function
 *@array:arra
 *@size:size
 *@cmp:pointer
 *Return:-1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int n;

if (array && cmp && size > 0)
for (n = 0; n < size; n++)
if (cmp(array[n]))
return (n);
return (-1);
}
