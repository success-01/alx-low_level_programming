#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints any given argument
 * @format:argument specifier
 * Return:any argument given based on format specifier
 */
void print_all(const char * const format, ...)
{
	int m, check_stat; /*declared variable and datatype*/
	char *str;

	va_list all;

	va_start(all, format); /*variable argument*/

	m = 0;
	while (format != NULL && format[m] != '\0')
		{
			switch (format[m])
			{
				case 'i':
					printf("%d", va_arg(all, int));
					check_stat = 0;
					break;
				case 'f':
					printf("%f", va_arg(all, double));
					check_stat = 0; /*check if condition is met*/
					break;
				case 'c':
					printf("%c", va_arg(all, int));
					check_stat = 0;
					break;
				case 's':
					str = va_arg(all, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s", str);
					break;
				default:
					check_stat = 1;
					break;
			}
			if (format[m + 1] != '\0' && check_stat == 0) /*if not NULL*/
				printf(", ");
			m++; /*update step of iter variable*/
		}
		printf("\n");/*print new line*/
		va_end(all);/*end traversal*/
}
