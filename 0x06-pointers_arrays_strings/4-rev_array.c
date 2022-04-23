#include "main.h"
#include <stdlib.h>
/**
* reverse_array - Reverses int array
* @a: integer pointer
* @n: number of array
*
* Return: void
*/

void reverse_array(int *a, int n)
{
int *num;
int i, j;

num = (int*)malloc(n * sizeof(int));
for (i = 0; i < n; i++)
{
	num[i] = a[n - (i + 1)];
}

for (j = 0; j < n; j++)
{
	a[j] = num[j];
}
return;
}
