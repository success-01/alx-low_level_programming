#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int c = 0;
	int i = n;

	for (; c < i; r++)
	{
		dest[c] = src[c];
		n--;
	}
	return (dest);
}
