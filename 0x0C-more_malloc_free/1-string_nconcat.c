#include <stdlib.h>
#include "main.h"

/**
 **string_nconcat - function that concatenates two strings
 *@s1:appended string to other
 *@s2:string to concentrate
 *@n:number of bytes from s2 to consentrate to s1
 *Return: pointer to resulted string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int m = 0, l = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	while (m < len1)
	{
		s[m] = s1[m];
		m++;
	}

	while (n < len2 && m < (len1 + len2))
		s[m++] = s2[l++];

	while (n >= len2 && m < (len1 + len2))
		s[m++] = s2[l++];

	s[m] = '\0';

	return (s);
}
