#include <stdlib.h>

/**
* free_grid - main function
* @grid: parameter1
* @height: parameter2
*
* Return: void
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
