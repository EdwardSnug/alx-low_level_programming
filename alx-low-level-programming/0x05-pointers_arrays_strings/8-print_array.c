#include "main.h"
/**
  *print_array - A function that prints 'n' elements
  *followed by a new line
  *
  *@a: Pointer to implicit conversion into our array element
  *@n: The number of elements in our array
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
