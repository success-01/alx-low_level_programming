#include "main.h"
#include <stdio.h>
/**
 * main - prints name of program and new line
 * @argv: array of argument
 * @argc: number of arguments there
 * Return:Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
