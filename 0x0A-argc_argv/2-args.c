#include "main.h"
#include <stdio.h>
/**
 * main - prints all received arguments
 * @argv:array of arguments
 * @argc:number of arguments
 * Return:Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}

	return (0);
}
