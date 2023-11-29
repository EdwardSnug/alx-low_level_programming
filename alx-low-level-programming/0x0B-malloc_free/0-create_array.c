#include "main.h"
#include <stdlib.h>
/**
  *create_array - A function that creates an array of characters,
  *and initialises it with a specific char
  *
  *@size: Determines the number of array elements malloc fxn allocates
  *@c: Specific character to be initialised in the arrays dynamically.
  *
  *Return: returns pointer to array or NULL(0) if it fails
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(sizeof(char) * size);
	if (str == 0)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < size)
		{
			str[i] = c;
			i++;
		}
	}
	return (str);
}
