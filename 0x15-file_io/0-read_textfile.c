#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - eads a text file and prints it to the POSIX standard output
 * @filename: string to represent the file name
 * @letters: number of letter it should read and print
 *
 * Return: number of letters it could read and print otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w, fd;
	char *c;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	c = malloc(sizeof(char) * letters);
	if (c == NULL)
		return (0);
	r = read(fd, c, letters);
	if (r == -1)
	{
		close(fd);
		free(c);
		return (0);
	}
	w = write(STDOUT_FILENO, c, letters);
	if (w == -1 || w != r)
	{
		close(fd);
		free(c);
		return (0);
	}
	close(fd);
	free(c);
	return (w);
}
