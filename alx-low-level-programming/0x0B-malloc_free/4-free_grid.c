#include "main.h"
#include <stdlib.h>
/**
  *free_grid - A function that frees dynamically allocated memory
  *space for alloc_grid function
  *
  *@grid:Double pointer variable used to free allocated memory space
  *@height: 2D array column value for the array
  */
void free_grid(int **grid, int height)
{
	int i;

	/*Free allocated memory*/
	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
