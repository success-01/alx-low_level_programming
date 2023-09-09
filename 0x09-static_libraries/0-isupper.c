#include "main.h"
/**
 * _isupper - looks for uppercase letters
 * @c: char to check
 * Return: 1 for uppercase ,0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
