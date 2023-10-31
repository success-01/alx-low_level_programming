#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_strdup - makes a duplicate of the new memory space allocation
 * @str:char
 * Return:pointer to duplicate str , NULL if str is NULL
 */
char *_strdup(char *str)
{
	char *aaa;
	int m, f;

	m = 0;
	f = 0;

	if (str == NULL)
		return (NULL);
	m = 0;

	while (str[m] != '\0')
		m++;

	aaa = malloc(sizeof(char) * (m + 1));

	if (aaa == NULL)
		return (NULL);

	for (f = 0; str[f]; f++)
		aaa[f] = str[f];

	return (aaa);
}
