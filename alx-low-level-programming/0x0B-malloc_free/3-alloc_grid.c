#include "main.h"
#include <stdlib.h>
/**
  *alloc_grid - A function that returns a ptr to a 2d array of integers
  *
  *@width: Number of rows
  *@height: Number of columns
  *
  *Return: returns dynamically aallocated array of the integers
  */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **myarray;

	if (width <= 0 || height <= 0)
		return (NULL);
	myarray = malloc(sizeof(int *) * height);/*Allocate memory for rows*/
	if (myarray == NULL)
	{
		return (NULL);
		free(myarray);
	}
	for (i = 0; i < height; i++)/*Allocate memory for each row*/
	{
		myarray[i] = malloc(sizeof(int) * width);
		if (myarray[i] == NULL)
		{
			for (j = 0; j < i; j++)/*Free previously allocated memory space*/
			{
				free(myarray[j]);
			}
			free(myarray);
			return (NULL);
		}
	}
	i = 0;
	while (i < height)
	{
		for (j = 0; j < width; j++)
		{
			myarray[i][j] = 0;
		}
		i++;
	}
	return (myarray);
	for (i = 0; i < height; i++)/*free allocated memory*/
	{
		free(myarray[i]);
	}
	free(myarray);
}
