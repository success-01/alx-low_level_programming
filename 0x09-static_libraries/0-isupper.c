#include "main.h"
/**
 * _isupper - look for capital laters
 * @c: char 
 * Return: if capital letter return 1 ,else return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
