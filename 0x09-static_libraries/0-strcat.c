#include "main.h"
/**
 * _strcat - concentrates two strings
 * @dest: pointer to the intended string
 * @src: pointer to the origin string
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[y] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';
	return (dest);
}
