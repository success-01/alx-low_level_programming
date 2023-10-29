#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string to an integer by multiplication
 * @s:converted string
 * Return:integer converted from the string
 */
int _atoi(char*s)
{
	int j, c, n, len, m, digit;

	j = 0;
	c = 0;
	n = 0;
	len = 0;
	m = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (j < len && m == 0)
	{
		if (s[j] == '-')
			++c;
		if (s[j] >= '0' && s[j] <= '9')
		{
			digit = s[j] - '0';
			if (c % 2)
				digit = -digit;
			n = n * 10 + digit;
			m = 1;
			if (s[1 + j] < '0' || s[1 + j] > '9')
				break;
			m = 0;
		}
		j++;
	}
	if (m == 0)
		return (0);

	return (n);
}
