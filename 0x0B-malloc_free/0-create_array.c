#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of chars, initialize with specific bar
 * @c: char to initialize
 * @size: no. of bytes to be allocated
 * Return: pointer to array or null if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int k;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
		str[k] = c;
	return (str);

}
