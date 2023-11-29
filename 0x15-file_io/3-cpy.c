#include "main.h"
#include <stdio.h>
/**
  *buffer_memory - A function that creates a buffer memory for storage
  *
  *@filename: The filename to retrieve data to store in buffer
  *
  *Return: returns created buffer memory on success
  */
char *buffer_memory(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s/n", filename);
		exit(99);
	}
	return (buffer);
}
/**
  *close_file - A function that closes an opened file
  *
  *@fd: Filename
  */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d/n", fd);
		exit(100);
	}
}
/**
  *main - An entry for the program
  *
  *@argc: Number of command counts entered on stdinput
  *@argv: A pointer to a character array of strings of the argument commands
  *
  *Return: returns 0 on success
  */
int main(int argc, char *argv[])
{
	int source_file, dest_file, bytesread, byteswritten;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = buffer_memory(argv[2]);
	source_file = open(argv[1], O_RDONLY);
	bytesread = read(source_file, buffer, 1024);
	dest_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (source_file == -1 || bytesread == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s/n", argv[1]);
			free(buffer);
			exit(98);
		}
		byteswritten = write(dest_file, buffer, bytesread);
		if (dest_file == -1 || byteswritten == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s/n", argv[2]);
			free(buffer);
			exit(99);
		}
		bytesread = read(source_file, buffer, 1024);
		dest_file = open(argv[2], O_WRONLY | O_APPEND);
	} while (bytesread > 0);
	free(buffer);
	close_file(source_file);
	close_file(dest_file);
	return (0);
}
