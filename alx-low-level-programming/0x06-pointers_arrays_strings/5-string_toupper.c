#include "main.h"
/**
  *string_toupper - A fxn that converts all lowercase
  *of a string to uppercase
  *
  *@ch: Lowercase characters for conversion
  *
  *Return: All uppercase letters
  */
char *string_toupper(char *ch)
{
	int i;

	i = 0;
	while (ch[i] != '\0')
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
		{
			ch[i] = ch[i] - 'a' + 'A';
		}
		i++;
	}
	return (ch);
}
