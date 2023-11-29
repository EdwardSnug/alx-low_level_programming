#include "function_pointers.h"
/**
  *array_iterator - A function that uses another function as a parameter
  *to iterate or list down on elements of an array
  *
  *@array: Name of our array
  *@size: Number of elements to be present in our array
  *@action: Our function pointer array to use another function.
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
	{
		return;
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
