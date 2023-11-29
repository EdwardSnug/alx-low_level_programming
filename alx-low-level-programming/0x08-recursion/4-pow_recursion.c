#include "main.h"
/**
  *_pow_recursion - A fxn that calcs x raied to the power of y.
  *
  *@x: Whole number to raised to the power of 'y'
  *@y: Whole number (multiply x by itself 'y' times)
  *
  *Return: (-1) to show error, returninteger (x)on success
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y % 2 == 0)
	{
		int pow;

		pow = _pow_recursion(x, y / 2);
		return (pow * pow);
	}
	else
	{
		int pow;

		pow = _pow_recursion(x, y / 2);
		return (x * pow * pow);
	}
}
