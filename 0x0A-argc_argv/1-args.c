#include "main.h"
#include <stdio.h>
/**
 * main - print number or arguments passed to it
 * @argv:array of arguments
 * @argc:number of arguments
 * Return:Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
		printf("%d\n", argc - 1);

		return (0);
}
