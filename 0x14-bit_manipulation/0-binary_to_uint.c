#include "main.h"
/**
  *binary_to_uint - A function that converts a binary number to decimal
  *(unsigned integer)
  *
  *@b: A ptr to a const array(string) containing binary number for conversion
  *
  *Return: returns decimal converted value or 0
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_value;

	decimal_value = 0;
	if (b == NULL || !b)
		return (0);
	for (; *b; b++)
	{
		if (*b < '0' || *b > '1')
			return (0);
		decimal_value = (decimal_value << 1) + (*b - '0');
	}
	return (decimal_value);
}
