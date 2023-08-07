#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2D array.
 * @grid: Pointer to the 2D array.
 * @height: Height of the array.
 *
 * Description: This function frees the memory occupied by a 2D array.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL && height > 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
