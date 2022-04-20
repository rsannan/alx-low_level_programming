#include <stdio.h>
#include "main.h"
/**
* print_array - prints numbers in an array
* @a: pointer to array
* @n: number of elements in array
*
* Return: void
*/

void print_array(int *a, int n)
{
int i;

if (n > 0)
{
	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", *(a + i));
		}
		else
		{
			printf(", %d", *(a + i));
		}
	}
}
printf("\n");

return;
}
