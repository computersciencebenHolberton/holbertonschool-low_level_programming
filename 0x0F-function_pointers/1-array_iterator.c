#include "function_pointers.h"
/**
 *array_iterator - function
 *@array:int
 *@size:size
 *@action:pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t n;

if (array && action && size)
for (n = 0; n < size; n++)
action(array[n]);
}
