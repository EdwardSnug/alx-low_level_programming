#include "main.h"
/**
  *_strlen - Fuction that returns the length of a string
  *
  *@s:stored string variable
  *
  *Return: length of the variable
  */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
