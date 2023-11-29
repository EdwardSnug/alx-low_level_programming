#include "main.h"
/**
 * get_endianness - Determine the endianness of the system.
 *
 * Return: 1 for Little Endian, 0 for Big Endian.
 */
int get_endianness(void)
{
	/**
	 * union - A datatype that allows members to share the same memory location.
	 *
	 * @i: Integer used to interpret byte order
	 * @c: Array of chars to access individual bytes
	 *
	 * Description: Used to store on both char and int datatype in same memory.
	 */
	union
	{
		int i;            /*< Integer used to interpret byte order */
		char c[sizeof(int)];  /*< Array of chars to access individual bytes */
	} test;

	test.i = 1;

	/*
	 * If the first byte (lowest address) is 1,
	 * it indicates Little Endian.
	 * If the last byte (highest address) is 1,
	 * it indicates Big Endian.
	 */
	return ((test.c[0] == 1) ? 1 : 0);
}

