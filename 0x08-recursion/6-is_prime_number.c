#include "main.h"
/**
* is_prime - checks if n is prime
* @n: number
* @i: divisor
*
* Return: 1 if prime or 0 otherwise
*/

int is_prime(int n, int i)
{
if (n <= 1)
{
	return (0);
}
else if (n == i)
{
	return (1);
}
else if ((n % i) == 0)
{
	return (0);
}
i = i + 1;
return (is_prime(n, i));
}
/**
* is_prime_number - checks if n is prime
* @n: number
*
* Return: 1 if prime otherwise 0
*/

int is_prime_number(int n)
{
return (is_prime(n, 2));
}
