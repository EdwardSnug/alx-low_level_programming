#include "main.h"
/**
  *set_bit - Sets the value of a given bit to 1 at a given index
  *
  *@n: number in decimal notation
  *@index: The bit you want to set
  *
  *Return: returns 1 on success or -1 on error
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	/**
	  *Bitwise OR is used together with left shift to specify the index
	  *to one and preserve the other bits of the original number
	 */
	*n |= (1 << index);
	return (1);
}
