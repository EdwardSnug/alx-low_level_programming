#include "main.h"
#include <stdlib.h>
/**
  *str_concat - Function that concates two strings and stores dynamically
  *
  *@s1: String variable
  *@s2: String variable
  *
  *Return: returns the dynamically alocated string variable
  *returns NULL on failure
  */
char *str_concat(char *s1, char *s2)
{
	int i, m, n, len;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	m = 0;
	while (s1[m] != '\0')
		m++;
	n = 0;
	while (s2[n] != '\0')
		n++;
	len = m + n;
	str = malloc((sizeof(char) * len) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	n = 0;
	i = 0;
	m = 0;
	while (s1[m] != '\0')
	{
		str[i] = s1[m];
		m++;
		i++;
	}
	while (s2[n] != '\0')
	{
		str[i] = s2[n];
		n++;
		i++;
	}
	str[i] = '\0';
	return (str);
	free(str);
}
