#include <stdio.h>
/**
 * main - prints the number of arguments passed into the program
 *
 * @argc: number of command line arguments
 * @argv: array containing program command line argument
 * Return: (0) if successful
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
