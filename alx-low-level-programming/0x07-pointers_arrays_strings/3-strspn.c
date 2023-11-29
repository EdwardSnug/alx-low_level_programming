#include "main.h"
/**
  *_strspn - A function that gets the length of string
  *@(s): String variable
  *@accept: Number of bytes to find in string 's'
  *
  *Return: Number of bytes in initial segment 's'
  */
unsigned int _strspn(char *s, char *accept)
{
	int length, i;

	length = 0;
	i = 0;
	while (s[i] != '\0')
	{
		char *c = accept;
		while (*c)
		{
			if (s[i] == *c)
			{
				length = length + 1;
				break;
			}
			else
			{
				return length;
			}
			i++;
		}
	}
	return (length);
}
