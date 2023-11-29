#include "main.h"
/**
  *_strchr - a function that locates a character in string
  *
  *@s: The string variable to locate the character
  *@c: The character to be located inside string variable
  *
  *Return: returns first occurence of 'c' in string variable
  *s or NULL (0) if none is found
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
