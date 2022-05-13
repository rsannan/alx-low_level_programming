#include "function_pointers.h"
/**
* int_index - searches for an integer
* @array: integer array
* @size: size of array
* @cmp: compare function
*
* Return: integer if found otherwise -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int index, cmp_result;

if (size <= 0)
{
return (-1);
}
if (cmp == NULL || array == NULL)
{
	return (-1);
}
for (index = 0; index < size; index++)
{
	cmp_result = cmp(array[index]);
	if (cmp_result != 0)
	{
		return (index);
	}

}
return (-1);
}
