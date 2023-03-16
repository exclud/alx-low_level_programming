#include <stddef.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
int i, *arr;

if (min > max)
return (NULL);

arr = malloc(sizeof(int) * (max - min + 1));
if (arr == NULL)
return (NULL);

for (i = 0; i <= max - min; i++)
arr[i] = min + i;

return (arr);
}

