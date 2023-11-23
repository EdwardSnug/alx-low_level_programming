#include "main.h"
/**
  *flip_bits - gets the number of bits you would need to flipto get one
  *number to another
  *
  *@n: first number in decimal notation
  *@m: second number in decimal notation
  *
  *Return: returns number of bits needed to flip one integer to the other
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int i = 0;

	while (xor != 0)
	{
		xor &= (xor - 1);
		i++;
	}
	return (i);
}
