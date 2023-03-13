#include <stdlib.h>

/**
 * free_grid - Frees the memory allocated by alloc_grid.
 * @grid: The grid to be freed.
 * @height: The height of the grid.
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}

free(grid);
}

