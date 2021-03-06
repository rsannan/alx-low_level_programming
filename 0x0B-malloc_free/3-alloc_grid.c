#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
* alloc_grid - creates a grid
* @width: rows
* @height: colomn
*
* Return: s if success otherwise
*/
int **alloc_grid(int width, int height)
{
int i, j, l;
int **s;

if (width <= 0 || height <= 0)
{
	return (NULL);
}
s = malloc(sizeof(int *) * height);
if (s == NULL)
{
	free(s);
	return (NULL);
}
for (l = 0; l < height; l++)
{
	s[l] = malloc(sizeof(int) * width);
}
for (l = 0; l < height; l++)
{
if (s[l] == NULL)
{
	for (l = 0; l < height; l++)
	{
		free(s[l]);
	}
	free(s);
	return (NULL);
}
}
for (i = 0; i < height; i++)
{
	for (j = 0; j < width; j++)
	{
		s[i][j] = 0;
	}
}
return (s);
}
