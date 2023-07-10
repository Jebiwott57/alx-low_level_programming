#include "main.h"

/**
 * create_file - A function that creates a file.
 * @filename: Name of file to create.
 * @text_content: String to write in the created file.
 *
 * Return: 1 (Success) or -1 otherwise.
 */
int create_file(const char *filename, char *text_content)
{
	int fs, wr, length;

	if (filename == NULL)
		return (-1);

	fs = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fs == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (length = 0; text_content[length]; length++)
		;

	wr = write(fs, text_content, length);

	if (wr == -1)
		return (-1);

	close(fs);

	return (1);
}
