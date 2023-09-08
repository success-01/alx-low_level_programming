#include "main.h"
/**
 * _sqrt_a - returns the natural square root of a number
 * @a:number to calculate square root of
 * @d:iterator
 * Return:-1 or square root
 */
int_sqrt_a(int a, int d)
{
	if (d * d == a)
	{
		return (d);
	}
	else if (d * d > a)
	{
		return (-1);
	}
	return (int_sqrt_a(a, d + 1));
}
/**
 * _sqrt_recursion - returns natural square root of number
 * @n:input number
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
