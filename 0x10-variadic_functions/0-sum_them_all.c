#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all of the parameters passed to func
 * @n:number of parameters passed to function
 * @...:variable number of paramerters to calculate the sum of
 *
 * Return:If n == 0 - 0, otherwise return the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numb;
	unsigned int a, sum = 0;

	va_start(numb, n);

	for (a = 0; a < n; a++)
		sum += va_arg(numb, int);

	va_end(numb);

	return (sum);

}
