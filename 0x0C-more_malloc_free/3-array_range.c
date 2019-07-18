#include "holberton.h"
#include <stdlib.h>
/**
 *array_range - arry 1
 *@min:first
 *@max:end
 *Return:
 */
int *array_range(int min, int max)
{
int cnt1, cnt_range;
int *ptr;

if (min > max)
return (NULL);
cnt_range = max - min + 1;
ptr = malloc(cnt_range * sizeof(*ptr));
if (ptr == NULL)
return (NULL);
for (cnt1 = 0; cnt1 < cnt_range; min++, cnt1++)
ptr[cnt1] = min;
return (ptr);
}
