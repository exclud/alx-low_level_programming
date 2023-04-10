#include "main.h"

/**
 * create_file - Creates a file with the given name and writes the text content
 *               into it.
 *
 * @filename: The name of the file to be created.
 * @text_content: The text content to be written into the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w_len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[w_len])
			w_len++;

		if (write(fd, text_content, w_len) == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
