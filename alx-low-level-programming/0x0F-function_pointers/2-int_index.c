#include "function_pointers.h"
/**
  *int_index - A function that searches for an integer
  *
  *@array: array name
  *@size: The number of elements of our array
  *@cmp: A function pointer to be used to compare values
  *
  *Return: Always (0) on success else (-1) on error
  *On success returns the array index on the first element of int
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) > 0 || cmp(array[i]) < 0)
		{
			return (i);
		}
	}
	return (-1);
}
