#include "variadic_functions.h"
#include <stdarg.h>
/**
  *sum_them_all - A function that sums all its parameters
  *
  *@n: Our named paramater a constant integer value for adding
  *
  *Return: returns the total sum of all given arguments
  */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
	}
	va_end(ap);
	return (sum);
}
