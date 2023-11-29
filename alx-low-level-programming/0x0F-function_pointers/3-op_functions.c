#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *op_add - A function that calculates the sum of two integers
  *
  *@a: First integer
  *@b: Second integer
  *
  *Return: Returns sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  *op_sub - A function that calculates the difference of two integers
  *
  *@a: First integer
  *@b: Second integer
  *
  *Return: Returns difference of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  *op_mul - A function that calculates the product of two integers
  *
  *@a: First integer
  *@b: Second integer
  *
  *Return: Returns product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  *op_div - A function that calculates the division of two integers
  *
  *@a: First integer
  *@b: Second integer
  *
  *Return: Returns result of division of a and b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
  *op_mod - A function that calculates the remainder b2n two integers
  *
  *@a: First integer
  *@b: Second integer
  *
  *Return: Returns remainder of a and b
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
