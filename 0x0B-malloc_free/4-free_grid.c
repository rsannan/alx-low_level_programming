#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
* free_grid - frees dynamic allocated memory
* @grid: 2d array
* @height: colomn
*
* Return: grid
*/

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);

return;
}
