#include "holberton.h"
#include <stdlib.h>
/**
 *alloc_grid - creates 2d array of integers
 *@width: width
 *@height:height
 *Return: Always
 */
int **alloc_grid(int width, int height)
{
int **array;
int loop;
int loop1;
int loop2;

if (width <= 0 || height <= 0)
{
return (NULL);
}
array = (int **) malloc(sizeof(int *) * height);
if (array == NULL)
{
free(array);
return (NULL);
}
for (loop = 0; loop < height; loop++)
{
array[loop] = (int *) malloc(sizeof(int) * width);
if (array[loop] == NULL)
{
while (loop >= 0)
{
free(array[loop]);
loop--;
}
free(array);
return (NULL);
}
}
for (loop1 = 0; loop1 < height; loop1++)
{
for (loop2 = 0; loop2 < width; loop2++)
{
array[loop1][loop2] = 0;
}
}
return (array);
}
