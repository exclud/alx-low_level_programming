#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers with each element initialized to 0.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: If successful - a pointer to the allocated grid, otherwise - NULL.
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
{
return (NULL);
}

/* Allocate memory for the rows of the grid */
grid = malloc(sizeof(int *) * height);

if (grid == NULL)
{
return (NULL);
}

/* Allocate memory for the columns of the grid */
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);

if (grid[i] == NULL)
{
/* Free previously allocated memory */
for (j = 0; j < i; j++)
{
free(grid[j]);
}

free(grid);

return (NULL);
}

/* Initialize each element of the grid to 0 */
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}

return (grid);
}

