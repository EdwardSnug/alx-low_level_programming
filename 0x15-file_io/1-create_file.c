#include "main.h"
/**
  *create_file - A function that creates a file
  *
  *@filename: Name of the file to be created
  *@text_content: A string variable null terminated
  *
  *Return: returns 1 on success -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd, byteswritten, str_length;

	if (filename == NULL)
		return (-1);
	str_length = 0;
	if (text_content != NULL)
	{
		while (text_content[str_length] != '\0')
			str_length++;
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	byteswritten = write(fd, text_content, str_length);
	if (byteswritten == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
