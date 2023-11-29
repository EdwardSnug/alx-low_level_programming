#include "main.h"
/**
  *_strncpy - A function that copies a string
  *
  *@n: Number of bytes to copy to dest
  *@src: First string to copy containing n or more bytes(source)
  *@dest: Second string to be copied to
  *and end with a terminating null byte(destination)
  *
  *Return: dest - concatenated strings for both src n bytes and dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
