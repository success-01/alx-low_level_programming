#include "function_pointers.h"
/**
 * int_index - func looks for an int
 * @size:size of elements
 * @cmp:pointer to func used to compare values
 * @array:array
 * Return:0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (m = 0; m < size; m++)
	{
		if (cmp(array[m]))
			return (m);
	}
	return (-1);
}
