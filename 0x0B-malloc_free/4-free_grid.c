#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2-D grid previously created
 * @grid: pointer to grid
 * @height: rows
 * Return: nothing or free memory
 **/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
