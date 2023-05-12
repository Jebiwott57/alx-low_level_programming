#include "main.h"
#include <stdio.h>

void error_98(int file_from, char *buff, char *argv);
char *create_buffer(char *file);
void close_file(int fd);

#define BUFF_SIZE 1024

/**
 * error_98 - If file_from does't exist or can't be read.
 * @file_from: The first argument file to read and append.
 * @buff: The buffer.
 * @argv: The argument vector.
 *
 * Return: void.
 */
void error_98(int file_from, char *buff, char *argv)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		free(buff);
		exit(98);
	}
}

/**
 * create_buffer - Allocate 1024 bytes for a buffer in memory at a time.
 * @file: File buffer name to store characters.
 *
 * Return: void.
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * BUFF_SIZE);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}

/**
 * close_file - If file descriptor doesn't close.
 * @fd: The file descriptor to close.
 *
 * Return: void.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - A program that copies the content of a file to another file.
 * @argc: Argument count.
 * @argv: Double pointer to argumnet vector.
 *
 * Return: 0 (Success) or Error otherwise.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, rd, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	rd = read(file_from, buff, BUFF_SIZE);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (file_from == -1 || rd == -1)
		{
			error_98(rd, buff, argv[1]);
		}
		wr = write(file_to, buff, rd);
		if (file_to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		rd = read(file_from, buff, BUFF_SIZE);
		file_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (wr > 0);

	close(file_from);
	close(file_to);
	free(buff);

	return (0);
}
