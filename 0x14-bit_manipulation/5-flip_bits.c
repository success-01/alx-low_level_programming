#include "main.h"
/**
 * flip_bits -returns number of bits needed to flip to get from one to another
 * @n:number one
 * @m:number two
 * Return:number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int l, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (l = 63; l >= 0; l--)
	{
		current = exclusive >> l;
		if (current & 1)
			count++;
	}
	return (count);
}
