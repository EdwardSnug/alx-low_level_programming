#include "main.h"
/**
  *read_textfile - A function that reads a text file to print to STDOUT.
  *@filename: The textfile being read
  *@letters: Number of letters to be read ad then output
  *
  *Return: Actual number of letters it should output on success
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	ssize_t fd, bytesread, byteswritten;

	/* Open file for reading */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	/*Allocate memory for buffer*/
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	/* Read from file into buffer */
	bytesread = read(fd, buffer, letters);
	if (bytesread == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	/* Write contents of buffer to STDOUT */
	byteswritten = write(STDOUT_FILENO, buffer, bytesread);
	if (byteswritten == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (byteswritten);
}
