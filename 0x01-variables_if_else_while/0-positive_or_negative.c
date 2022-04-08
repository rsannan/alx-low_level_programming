#include <stdio.h>
#include <time.h>
/**
* main - Checks if n is positive or negative
*
* Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("is negative");
	}
	else if (n > 0)
	{
		printf("is positive");
	}
	else (n == 0)
	{
		printf("is zero");
	}
	return (0);
}
