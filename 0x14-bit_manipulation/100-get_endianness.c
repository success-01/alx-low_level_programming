#include "main.h"
/**
 *  get_endianness - checks  the endianness of a little or big machine
 *  Return:0 if big,1 if little
 */
int get_endianness(void)
{
	unsigned int m;
	m = 1;

	char*c = (char*)&m;

	return (*c);
}
