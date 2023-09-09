#include <stdio.h>
/**
 * main - prints its name followed by new line
 *
 * @argc: number of command line arguments
 * @argv: array with command line argument
 * Return: (0) if Success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
