#include <stdio.h>
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
