#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - func prints a name
 * @f:pointer to function
 * @name:sring to add
 * Return:void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
