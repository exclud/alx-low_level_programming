#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of the array to be created
 * @c: char to initialize the array with
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size == 0)
return (0);

arr = malloc(size * sizeof(char));
if (arr == 0)
return (0);

for (i = 0; i < size; i++)
arr[i] = c;

return (arr);
}

