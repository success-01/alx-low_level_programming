#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates arrays of chars and initializes them
 * @c:char
 * @size:size of array
 * Description:create array of size and assign to char
 * Return: pointer to array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int m;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (m = 0; m < size; m++)
		str[m] = c;

	return (str);
}
