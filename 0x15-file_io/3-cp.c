#include "main.h"
#include <stdio.h>

/**
 * error_outputs - A funtion thet returns the error message
 * on the POSIX standard error.
 * @file_from: File to read and append onto.
 * @file_to: File to coppy onto file_from.
 * @argv: Argument vector to print.
 *
 * Return: void.
 */
void error_outputs(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - A function that copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: The argument vector.
 *
 * Return: 1 (Success) or standard error otherwise.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t string, wr;
	char buffer[1024];

	if (argc != 3)
	{
		exit(97);
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_outputs(file_from, file_to, argv);

	string = 1024;
	while (string == 1024)
	{
		string = read(file_from, buffer, 1024);
		if (string == -1)
			error_outputs(-1, 0, argv);
		wr = write(file_to, buffer, string);
		if (wr == -1)
			error_outputs(0, -1, argv);
	}

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	return (1);
}
