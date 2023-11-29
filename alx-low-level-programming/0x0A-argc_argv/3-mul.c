#include <stdio.h>
#include "main.h"
/**
  *_atoi - A function that converts string to an integer
  *
  *@s: String to be converted
  *
  *Return: The integer converted or 0 (success)
  */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
	{
		return (0);
	}
	return (n);
}
/**
  *main - Entry for program calculating product
  *
  *@argc: Command line arguments count
  *@argv: 1d array string of the given cmd line arguments
  *
  *Return: returns (1) and Prints 'Error' if there are no two argument integers
  */
int main(int argc, char *argv[])
{
	int product, num1, num2;

	if (argc <= 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = _atoi(argv[1]);
		num2 = _atoi(argv[2]);
		product = num1 * num2;
	}
	printf("%d\n", product);
	return (0);
}
