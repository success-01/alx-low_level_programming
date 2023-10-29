#include "main.h"
/**
 * _memset - fill memory block with value
 * @s: address to be filled
 * @b:specific value
 * @n:number of bytes to be manipulated
 * Return:n bytes new value and changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int k;

	k = 0;

	for (; n > 0; k++)
	{
		s[k] = b;

		n--;
	}
	return (s);
}
