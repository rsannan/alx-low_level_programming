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
if (max == min)
	size = 1;

else if (max < 0 && min < 0)
	size = (-min - (-max)) + 1;

else if (min < 0)
	size = (max + (-min)) + 1;

else
	size = (max - min) + 1;
s = malloc(sizeof(int) * (size + 1));

if (s == NULL)
	return (NULL);
num = min;
if (max == min)
{
	s[0] = num;
}
else
{
	for (i = 0; i < size; i++)
	{
		s[i] = num;
		num = num + 1;
	}
}
return (s);
}
