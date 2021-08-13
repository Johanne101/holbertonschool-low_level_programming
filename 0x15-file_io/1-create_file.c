#include "main.h"

/**
 * create_file - Creates a function that creates a file.
 * @filename: is the name of the file to create
 * @text_content: is a content
 *
 */
int create_file(const char *filename, char *text_content)
{
	int file, error, len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	
	while (text_content[len])
		len++;

	error = write(file, text_content, len);
	if (error == -1)
		return (-1);

	close(file);
	return (1);
}
