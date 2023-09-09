#include <stdio.h>
/**
 * main - print all the arguments recieved
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 * Return: (0) if successful
 */
int main(int argc, char *argv[])
{
	int b;

	for (b = 0; b < argc; b++)
	{
		printf("%s\n", argv[b]);
	}
	return (0);
}
