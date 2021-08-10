#include "main.h"

/**
 * read_textfile - reads a text file and prints it to `POSIX` standard output
 * @filename: name of file.
 * @letters: number of text to read and write
 * Return: The actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *file;
	ssize_t f_d, r_d;

	file = malloc(sizeof(char) * letters);
	if (file == NULL)
	{
		return (0);
	}
	if (filename == NULL)
		return (0);

	f_d = open(filename, O_RDONLY);

	if (f_d == -1)
	{
		return (0);
	}

	/* read contiene el file descriptor (f_d), file, and letter (el poema)*/
	r_d = read(f_d, file, letters);

	if (r_d == -1)
	{
		return (0);
	}

	write(STDOUT_FILENO, file, r_d);
		close(f_d);

	free(file);
	return (r_d);
}
