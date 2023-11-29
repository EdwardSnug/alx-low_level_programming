#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *main - Entry for program
  *
  *@argc: Command line arguments count
  *@argv: 1d array of command line strings
  *
  *Return: returns 0 on success
  */
int main(int argc, char *argv[])
{
	int cents, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		change = 0;
		while (cents > 0)
		{
			change++;
			if ((cents - 25) >= 0)
			{
				cents = cents - 25;
				continue;
			}
			if ((cents - 10) >= 0)
			{
				cents = cents - 10;
				continue;
			}
			if ((cents - 5) >= 0)
			{
				cents = cents - 5;
				continue;
			}
			if ((cents - 2) >= 0)
			{
				cents = cents - 2;
				continue;
			}
			cents--;
		}
		printf("%d\n", change);
	}
	return (0);
}
