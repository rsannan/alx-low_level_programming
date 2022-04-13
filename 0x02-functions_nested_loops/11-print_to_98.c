#include "main.h"
#include <stdio.h>
/**
* print_to_98 - print natural numbers to 98
* @n: number to start
*
* Return: Always void
*/

void print_to_98(int n)
{
if (n < 98)
{
	for (; n <= 98; n++)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
}
else if (n > 98)
{
	for (; n >= 98; n--)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
}
else
{
	printf("%d\n", n);
}
return;
}
