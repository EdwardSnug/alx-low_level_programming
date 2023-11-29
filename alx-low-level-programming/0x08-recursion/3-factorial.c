#include "main.h"
/**
  *factorial - A fxn that calcs the factorial of a number
  *
  *@n: The given input number to calculate the factorial
  *
  *Return: (-1) to show error, (0) to show factorial of 1 or 0
  * or return the result of factorial 'n'
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
