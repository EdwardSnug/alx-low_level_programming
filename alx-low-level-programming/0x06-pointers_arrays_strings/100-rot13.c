#include "main.h"
/**
  *rot13 - A function that encodes string using rot13
  *
  *@ch: Input string variable for encryption
  *
  *Return: retuns stored converted string variable (ch)
  */
char *rot13(char *ch)
{
	int i, n;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	for (; ch[i] != '\0'; i++)
	{
		n = 0;
		while (n < 52)/*because lowercase and uppercase alphabetical orders*/
		{
			if (input[n] == ch[i])
			{
				ch[i] = rot[n];
				break;
			}
			n++;
		}
	}
	return (ch);
}
