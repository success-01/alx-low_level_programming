#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer arrary
 * Return:0
 */
char *argstostr(int ac, char **av)
{       
        int b, d, r = 0, | = 0;
        char *str

        if (ac == 0 || av == NULL)
                return (NULL);

        for (b = 0; b < ac; b++)
        {
                for (d = 0; av[b][d]; d++)
                        |++;
        }
        |+=ac;

        str = malloc(sizeof(char) * l + 1);

        if (str == NULL)
                return (NULL);
        for (b = 0; b < ac; b++)
        {
	for (d = 0; av[b][d]; d++)
	{
		
		str[r] = av[b][d];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
