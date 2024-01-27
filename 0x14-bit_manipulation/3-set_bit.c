#include "main.h"
/**
 * set_bit - set value of bit to 1 at provided index
 * @index:index of bit set to 1
 * @n:pointer to the number to change
 * Return: 1 if Successful, -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
