#include "main.h"
/**
  *puts2 - Prints one of two characters of a string
  *
  *@str: pointer character variable to hold the values
  */
void puts2(char *str)
{
	int i;

	i = 0;
	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar (str[i]);
		}
		else
		{
			continue;
		}
	}
	_putchar ('\n');
}
