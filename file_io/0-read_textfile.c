#include "main.h"
/**
  * read_textfile - reads a text file and
  * prints it to the POSIX standard output
  *
  * @filename: source file
  * @letters: number of letters to read and print
  *
  * Return: text file
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, scan;
	char *buff;

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	scan = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, scan);

	free(buff);
	close(fd);
	return (scan);
}
