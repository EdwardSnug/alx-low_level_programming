#include "main.h"
#include <stdlib.h>
/**
  *array_range - A function that creates an array of integers
  *
  *@min: Minimum integer value for you ordered values
  *@max: Maximum integer value for the ordered values
  *
  *Return: returns pointer to our dynamically appointed variable
  */
int *array_range(int min, int max)
{
	unsigned int i, j;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		j = max - min;
		array = malloc((sizeof(int) * j) + sizeof(int));
		if (array == 0)
		{
			return (NULL);
		}
		i = 0;
		while (min <= max)
		{
			array[i] = min;
			i++;
			min++;
		}
	}
	return (array);
	free(array);
}
