#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - excecutes func given as parameter on arry element
 * @size:no. of elements to print
 * @action:pointer to print
 * @array:the array
 * Return:void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m;

	if (array == NULL || action == NULL)
		return;

	for (m = 0; m < size; m++)
	{
		action(array[m]);
	}
}
