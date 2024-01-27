#include "main.h"
/**
 * clear_bit - sets value of given bit to 0
 * @index:index of bit
 * @n:pointer to the number
 * Return: 1 if Successful, -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
