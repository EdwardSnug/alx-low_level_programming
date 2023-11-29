#include "main.h"
#include <stdlib.h>
/**
  *string_nconcat - A function that concatenates two strings
  *
  *@s1: String variable
  *@s2: String variable that is joined to s1 variable
  *@n: Number of bytes from our s2 variable to be concatenated
  *
  *Return: return concatenated string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, length;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	j = 0;
	length = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (n >= j)
	{
		length = i + j;
	}
	else
	{
		length = i + n;
	}
	str = malloc((sizeof(char) * length) + 1);
	if (str == NULL)
		return (NULL);
	j = 0;
	for (k = 0; k < length; k++)
	{
		if (k <= i)
			str[k] = s1[k];
		if (k >= i)
		{
			str[k] = s2[j];
			j++;
		}
	}
	str[k] = '\0';
	return (str);
	free(str);
}
