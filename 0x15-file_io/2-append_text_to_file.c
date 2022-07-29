#include "main.h"

/**
 * append_text_to_file- Appends text to the end of a file
 *
 * @filename: name of the file
 * @text_content: string
 *
 * Return: 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	char *copy;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	copy = text_content;
	while (*copy != '\0')
	{
		len++;
		copy++;
	}
	if (write(fd, text_content, len) != len)
		return (-1);
	close(fd);
	return (1);
}