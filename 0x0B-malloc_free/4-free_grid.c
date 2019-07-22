#include "holberton.h"
#include <stdlib.h>
/**
 *free_grid - frees a 2d array
 *@grid:array
 *@height:height
 */
void free_grid(int **grid, int height)
{
int rnd;

for (rnd = 0; rnd < height; rnd++)
{
free(grid[rnd]);
}
free(grid);
}
