#include <stdio.h>
#include "main.h"
/**
  *main - Entry for program
  *
  *@argc: Command line argument count
  *@argv: 1d array string of written command line arguments
  *
  *Return: returns (0) on success
  */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
