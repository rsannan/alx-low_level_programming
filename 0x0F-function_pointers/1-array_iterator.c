#include "function_pointers.h"
/**
* array_iterator - executes a function given as a parameter on each element of an array
* @array: integer array
* @size: size of the array
* @action: function pointer
*
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
int index;

for (index = 0; index < size; index++)
{
	action(array[index]);
}
return;
}
