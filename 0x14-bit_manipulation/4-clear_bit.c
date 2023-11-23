#include "main.h"
/**
  *clear_bit - Sets the value of a given bit to 0 at a given index
  *
  *@n: number in decimal notation
  *@index: The bit you want to set
  *
  *Return: returns 1 on success or -1 on error
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);/* *n = (~(1 << index) & *n) */
	return (1);
}
