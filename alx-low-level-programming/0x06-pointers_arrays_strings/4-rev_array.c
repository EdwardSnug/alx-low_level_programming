#include "main.h"
/**
  *reverse_array - A function that reverses the content
  *of an array of integers
  *
  *@a: an array of integer
  *@n: the number of elements of the array
  *
  *Return: Nothing(void)
  */
void reverse_array(int *a, int n)
{
	int i, reverse;

	i = 0;
	while (i < n--)
	{
		reverse = a[i];
		a[i] = a[n];
		a[n] = reverse;
		i++;
	}
}
