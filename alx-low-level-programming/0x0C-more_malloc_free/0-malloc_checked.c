#include "main.h"
#include <stdlib.h>
/**
  *malloc_checked - A function that allocates memory using malloc
  *
  *@b: Number of elements to be allocated to size_t of given datatype
  *
  *Return: returns a pointer to the allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str == NULL)
	{
		exit(98);
	}
	return (str);
	free(str);
}
