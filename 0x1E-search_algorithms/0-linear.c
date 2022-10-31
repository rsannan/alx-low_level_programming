#include "search_algos.h"
/**
*linear_search - fills memory with constant byte
* @array: pointer to array
* @size: size of the array
* @value: value to search
*
* Return: Index of value if success or -1 if failed
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
