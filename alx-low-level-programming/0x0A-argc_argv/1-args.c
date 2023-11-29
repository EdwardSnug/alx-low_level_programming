#include <stdio.h>
#include "main.h"
/**
  *main - Entry for program
  *
  *@argc: command line arguments count
  *@argv: 1d array of strings of the arguments passed to the program
  *
  *Return: returns (0) Always success
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
