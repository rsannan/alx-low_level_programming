#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
* array_range - creates an array of integers
* @min: minimum value
* @max: maximum value
*
* Return: s
*/
int *array_range(int min, int max)
{
int *s;
int i, num, size;

if (min > max)
	return (NULL);
else
	size = (max - min) + 1;

s = malloc(sizeof(int) * size);

if (s == NULL)
	return (NULL);
num = min;
if (max == min)
{
	s[0] = max;
}
else
{
	for (i = 0; i < size; i++)
	{
		s[i] = num;
		num++;
	}
}
return (s);
}
