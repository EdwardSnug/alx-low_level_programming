#include "main.h"
/**
 *cap_string - A function that capitalizes all words of a string
 *
 *@ch: Variable string to iterate through
 *
 *Return: returns character variable (ch)
 */
char *cap_string(char *ch)
{
	int i;

	i = 0;
	while (ch[i] != '\0')
	{
		if (ch[0] >= 97 && ch[0] <= 122)
		{
			ch[0] = ch[0] - 32;
		}
		if (ch[i] == ' ' || ch[i] == '\t' || ch[i] == '\n' || ch[i] == ',' ||
		ch[i] == ';' || ch[i] == '.' || ch[i] == '!' || ch[i] == '?' ||
		ch[i] == '(' || ch[i] == ')' || ch[i] == '{' || ch[i] == '}' || ch[i] == '"')
		{
			if (ch[i + 1] >= 97 && ch[i + 1] <= 122)
			{
				ch[i + 1] = ch[i + 1] - 32;
			}
		}
		i++;
	}
	return (ch);
}
