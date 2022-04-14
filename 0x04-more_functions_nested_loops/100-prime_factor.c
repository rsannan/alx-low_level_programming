#include <stdio.h>
/**
* is_prime_factor - finds if a factor is a prime number
* @x:  number to be identified as a prime number
* Return: 1 if prime factor 0 otherwise
*/
int is_prime_factor(int x)
{
int i;
if (x <= 1)
{
	return (10);
}
for (i = 2; i <= (x / 2); i++)
{
	if (x % i == 0)
	{
		return (10);
	}
}
return (5);
}
/**
* main - identifies max prime factor
*
* Return: Always 0
*/
int main(void)
{
long int num = 612852475143;
int i;
int max = 0;

for (i = 2; i < (num / 2); i++)
{
	if (num % i == 0)
	{
		if (is_prime_factor(i) == 5)
		{
			if (i > max)
			{
				max = i;
			}
		}
	}
}
printf("%d\n", max);
return (0);
}
