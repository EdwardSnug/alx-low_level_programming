#include "main.h"
#include <stdlib.h>
/**
  *_realloc - A function that replicates "realloc" function allocating
  *memory dynamially using malloc and free functions
  *
  *@ptr: Memory previously allocated with 'old_size'
  *@old_size: Allocated space in bytes for our ptr variable
  *@new_size: New allocated space to be dynamically allocated to our new
  *memory block
  *
  *Return: return pointer to our dynamically stored variables
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *str;

	if (new_size == old_size)
	{
		return (ptr);
		free(ptr);
	}
	if (ptr == 0)
	{
		str = malloc(new_size);
		if (str == 0)
		{
			return (NULL);
			free(str);
		}
		return (str);
		free(str);
	}
	else
	{
		if (new_size == 0)
		{
			return (NULL);
			free(ptr);
		}
	}
	str = malloc(new_size);
	if (str == 0)
	{
		return (NULL);
		free(str);
	}
	for (i = 0; i < old_size && i < new_size; i++)
	{
		str[i] = ((char *) ptr)[i];
	}
	return (str);
	free(str);
}
