#include "main.h"
/**
 * prime_a - Calculate if integer is a prime number
 * @a:input
 * @d:divisor
 * Return: (0)
 */
int prime_a(int a, int d)
{
	if (a <= 1 || (a != d && a % d == 0))
	{
		return (0);
	}
	else if (a == d)
	{
		return (1);
	}
	return (prime_a(a, d + 1));
}
/**
 * is_prime_number - find out if its a pime number
 * @n:input number
 * Return : 0 or 1
 */
int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
