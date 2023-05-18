#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid
 * @grid: The grid to free
 * @height: The height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL)
		return; /* Nothing to free if grid is already NULL */

	for (int i = 0; i < height; i++)
		free(grid[i]); /* Free each row */

	free(grid); /* Free the array of row pointers */
}
