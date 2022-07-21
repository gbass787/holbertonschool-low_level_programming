#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of file
 * @text_content: null terminated string to add at end of file
 *
 * Return: 1 on success, -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0, written, count = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND, 0664);
	if (fd == -1)
		return (-1);

	while (text_content[i] != 0)
	{
		i++;
		count++;
	}
	written = write(fd, text_content, count);
	if (written == -1)
		return (-1);
	close(fd);
	return (1);
}
