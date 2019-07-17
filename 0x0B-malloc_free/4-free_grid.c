#include "holberton.h"
#include <stdlib.h>

/**
 *free_grid - do gertting it to work
 *@grid: the 2d array
 *@height: the number of arrays
 *Return
 */
void free_grid(int **grid, int height)
{
int n;

for (n = 0; n < height; n++)
free(grid[n]);
free(grid);
}
