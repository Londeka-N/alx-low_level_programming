#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- a function that Reads text file print to STDOUT.
 * @filename: text file that is being read
 * @letters: number of letters to be read
 * Return: 0 when successful
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

