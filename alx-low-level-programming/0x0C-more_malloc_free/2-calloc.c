#include "main.h"
#include <stdlib.h>
/**
  *_calloc - A function that allocates memory like "calloc" function
  *
  *@nmemb: An array of elements
  *@size: Number of bytes to be allocated to each element
  *
  *Return: returns dynamically allocated variable or NULL on error
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i, j;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	j = nmemb * size;
	str = malloc(j);
	if (str == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < j; i++)
		{
			str[i] = 0;
		}
	}
	return (str);
	free(str);
}
