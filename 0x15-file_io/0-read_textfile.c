#include "main.h"
/**
 * read_textfile - function that reads a text file and prints
 * to the POSIX standard output
 *
 * @filename: filename (string pointer)
 * @letter:number of letters to read and print
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buff;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	nrd = read(fd, buff, letters);
	nwr = write(STDOUT_FILENO, buff, nrd);

	close(fd);
	free(buff);

	return (nwr);
}
