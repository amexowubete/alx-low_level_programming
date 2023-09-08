#include "main.h"
/**
 * read_textfile - a function that reads a text and prints it to the POSIX
 * @letters: the number of letters it should read and print
 * @filename: filename
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t rd, wt;
	char *buffer;
		if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters));
	if (!buffer)
		return (0);
	rd = read(fd, buffer, letters);
	wt = write(STDOUT_FILENO, buffer, rd);
	close(fd);
	free(buffer);
	return (wt);
}
