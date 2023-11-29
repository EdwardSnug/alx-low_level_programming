#include "main.h"
/**
  *leet - A function that encodes a string into 1337
  *
  *@ch: Array of characters to be encoded
  *
  *Return: returns string characters and those encoded.
  */
char *leet(char *ch)
{
	int i, n;
	char letters[] = "aAeEoOtTLl";
	char numbers[] = "4433007711";

	i = 0;
	while (ch[i] != '\0')
	{
		n = 0;
		while (n < 10)
		{
			if (letters[n] == ch[i])
			{
				ch[i] = numbers[n];
			}
			n++;
		}
		i++;
	}
	return (ch);
}

