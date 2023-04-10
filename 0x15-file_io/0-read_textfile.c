#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - eads a text file and prints it to the POSIX standard output
 * @filename: string to represent the file name
 * @letter: number of letter it should read and print
 *
 * Return: number of letters it could read and print otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t r, i, w;
	char *c;

	if (filename == NULL)
		return (0);
	int fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	c = malloc(sizeof(char) * letters);
	r = read(fd, c, letters)
	if (r <= 0)
		return (0);
	w = write(1, c, letters);
	if (w <= 0)
		return (0);
	return (w);
}
