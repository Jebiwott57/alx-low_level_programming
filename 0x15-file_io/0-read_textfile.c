#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: Name of file to read.
 * @letters: Number of letters it should read and print.
 *
 * Return: Number or letters it could read and print or 0 otherwise.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t rd, wr;
	int fs;

	if (filename == NULL)
		return (0);

	fs = open(filename, O_RDONLY);

	if (fs == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	rd = read(fs, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	close(fs);
	free(buffer);

	return (wr);
}
