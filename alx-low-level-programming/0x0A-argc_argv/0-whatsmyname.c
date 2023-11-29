#include <stdio.h>
/**
  *main - Start of program that prints name of program
  *
  *@argc: Number of arguments of main function
  *@argv: An array of arguments passed into the the program
  *
  *Return: returns (0) on success
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	i = 0;
	printf("%s\n", argv[i]);
	return (0);
}
