#include "main.h"
/**
  *checker - Checks if an integer is a prime number
  *
  *@n: Integer value to be evaluated
  *@i: loop control structure
  *
  *Return: returns the checked integer value
  */
int checker(int n, int i)
{
	if (n <= 1 || (n % i == 0 && i > 1))
	{
		return (0);
	}
	else if ((n / i) < i)
	{
		return (1);
	}
	return (checker(n, i + 1));
}

/**
  *is_prime_number - A fxn that reveals if an integer is a prime number
  *
  *@n: Integer value for evaluation
  *
  *Return: returns 1 if its a prime number else 0
  */
int is_prime_number(int n)
{
	return (checker(n, 1));
}

