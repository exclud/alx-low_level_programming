#include <stddef.h>
/**
 * array_iterator - applies a function to each element of an array
 * @array: a pointer to the array to iterate over
 * @size: the number of elements in the array
 * @action: a pointer to the function to apply to each element
 *
 * Description: This function takes an array of integers
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array == 0 || action == 0)
return;

for (i = 0; i < size; i++)
action(array[i]);
}

