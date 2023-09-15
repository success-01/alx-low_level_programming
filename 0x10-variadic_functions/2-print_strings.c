#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints strings , followed by new line
 * @separator:String to be printed between strings
 * @n:number of strings to be passed to the func
 * @...:a variable number of strings to be printed
 *
 * Description: If seperator is NULL, refrain from printing.
 * If one of the strings is NULL ,print (nil) instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *str;
	unsigned int index;

	va_start(string, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(string, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(string);
}
