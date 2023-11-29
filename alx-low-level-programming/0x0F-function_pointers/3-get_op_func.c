#include "3-calc.h"
#include <stdlib.h>
/**
  *get_op_func - A function that selects the correct operation
  *to be undertaken
  *
  *@s: Operator to be assed as argument to program
  *
  *Return: returns function same as the operation to undertake
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL && *(ops[i].op) != *s)
	{
		i++;
	}
	return (ops[i].f);
}
