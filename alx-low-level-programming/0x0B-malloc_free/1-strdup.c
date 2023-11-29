#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *_strdup - A function that copies a string to a newly allocated
  *space in memory
  *
  *@str: String variable to create a copy in our new string variable
  *
  *Return: returns new string variable or NULL if memory was insufficient
  */
char *_strdup(char *str)
{
	int i, len;
	char *nstring;

	if (str == 0)
	{
		return (NULL);
	}
	else
	{
		len = 1;
		while (str[len] != '\0')
		{
			len++;
		}
		nstring = malloc((sizeof(char) * len) + 1);
		i = 0;
		if (nstring == 0)
		{
			return (NULL);
		}
		while (i < len)
		{
			nstring[i] = str[i];
			i++;
		}
		nstring[i] = '\0';
	}
	return (nstring);
	free(nstring);
}
