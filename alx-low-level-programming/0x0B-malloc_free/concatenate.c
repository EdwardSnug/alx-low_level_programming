#include "main.h"
/**
  *_strcat - A function that concatenates two strings
  *
  *@src: First string to concatenate terminating null byte
  *@dest: Second string to concatenate and end with a terminating null byte
  *
  *Return: dest - concatenated strings for both src and dest
  */
char *_strcat(char *dest, char *src)
{
	int length, i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	length = 0;
	while (src[length] != '\0')
	{
		dest[i] = src[length];
		length++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
