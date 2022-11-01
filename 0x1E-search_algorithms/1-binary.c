#include "search_algos.h"
/**
* print_array - prints for an integer
* @array: integer array
* @high: array high point
* @low: array low point
*
* Return: Void
*/
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array:");
	for (i = low; i < high; i++)
	{
		printf(" %d,", array[i]);
	}
	printf(" %d\n", array[i]);
}

/**
* search_recursive - searches for an integer
* @array: integer array
* @value: value of integer
* @high: array high point
* @low: array low point
*
* Return: integer if found otherwise -1
*/
int search_recursive(int *array, int value, size_t low, size_t high)
{
	int mid;

	if (high >= low)
	{
		mid = (low + high) / 2;


		if (array[mid] == value)
		{
			print_array(array, low, high);
			return (mid);
		}
		else if (array[mid] < value)
		{
			print_array(array, low, high);
			return (search_recursive(array, value, mid + 1, high));
		}
		print_array(array, low, high);
		return (search_recursive(array, value, low, mid - 1));
	}
	return (-1);
}

/**
* binary_search - searches for an integer
* @array: integer array
* @size: size of array
* @value: number to search
*
* Return: integer if found otherwise -1
*/
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (search_recursive(array, value, 0, (size - 1)));
}
