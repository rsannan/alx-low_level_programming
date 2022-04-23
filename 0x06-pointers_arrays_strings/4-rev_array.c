#include "main.h"
/**
* reverse_array - Reverses int array
* @a: integer pointer
* @n: number of array
*
* Return: void
*/

void reverse_array(int *a, int n)
{
int num[n], i, j;


for (j = 0; j < n; j++)
{
	*(a + j) = num[j];
}

return;
}
