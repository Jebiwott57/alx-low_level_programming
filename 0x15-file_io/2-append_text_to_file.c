#include "main.h"

/**
 * append_text_to_file - A funciton that appends text at the end of a file.
 * @filename: The file to append to.
 * @text_content: The NULL terminating string to add onto filename.
 *
 * Return: 1 (Success) or -1 otherwise.
 * if filename is NULL return -1.
 * if text_content is NULL, don't add anything to the file.
 * return 1 if file exists and -1 if file doesn't exist or
 * doesn't have required permissions to write the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fs, string, wrr;

	if (filename == NULL)
		return (-1);

	fs = open(filename, O_WRONLY | O_APPEND);
	if (fs == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (string = 0; text_content[string]; string++)
			;
		wrr = write(fs, text_content, string);

		if (wrr == -1)
			return (-1);
	}
	close(fs);

	return (1);
}
