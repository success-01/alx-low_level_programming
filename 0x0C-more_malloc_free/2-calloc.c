#include <stdlib.h>
#include "main.h"
/**
 * *_memset - fills memory with constant byte
 * @s: memory area to be filled
 * @b: the char to be copied
 * @n: number of times to copy b
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
	{

		s[d] = b;
	}

	return (s);
}
/**
 * *_calloc - allocates memory for array using malloc
 * @nmemb:number of elements in array
 * @size:size of every element
 *
 * Return:pointet to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);


	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
