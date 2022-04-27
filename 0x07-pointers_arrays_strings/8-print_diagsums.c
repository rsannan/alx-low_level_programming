#include <stdio.h>
/**
* print_diagsums - prints diagonal sums
* @a: 2d array
* @size: size of array
*/

void print_diagsums(int *a, int size)
{
int i, j, sum1 = 0, sum2 = 0;

for (i = 0; i < size; i++)
{
	for (j = 0; j < size; j++)
	{
		if (i == j)
		{
			sum1 = sum1 + (a[i] + j);
			break;
		}
	}
}

for (i = size; i > 0; i--)
{
	for (j = 0; j < size; j++)
	{
		if ((size - (j + 1)) == i)
		{
			sum2 = sum2 + (a[i] + j);
			break;
		}
	}
}
printf("%d, %d", sum1, sum2);

return;
}
