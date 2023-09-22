#include <stdlib.h>
#include "main.h"
/**
 * *array_range - func that creates an array of integers
 * @min: min range of values stored
 * @max: number of elements and max range of values stored
 *
 * Return: pointer to a new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int m, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (m = 0; min <= max; m++)
		ptr[m] = min++;

	return (ptr);
}
