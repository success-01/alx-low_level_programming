#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @separator:string to be printed between the numbers
 * @n:number of integers passed into the function
 * @...:a variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numb;
	unsigned int index;

	va_start(numb, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(numb, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numb);
}
