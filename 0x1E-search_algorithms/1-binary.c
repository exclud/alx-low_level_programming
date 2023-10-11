#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if value is not present
 * or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, m;

	if (!array)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		for (m = l; m < r; m++)
			printf("%d, ", array[m]);
		printf("%d\n", array[r]);

		m = (l + r) / 2;
		if (array[m] == value)
			return (m);
		else if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;
	}

	return (-1);
}
