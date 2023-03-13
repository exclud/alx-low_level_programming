#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a specific char
 * @size: The size of the array to create
 * @c: The char to initialize the array with
 *
 * Return: If size = 0, returns NULL, otherwise returns a pointer to the array,
 *         or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *array;

if (size == 0)
{
return (NULL);
}

array = malloc(size * sizeof(char));

if (array == NULL)
{
return (NULL);
}

for (unsigned int i = 0; i < size; i++)
{
array[i] = c;
}

return (array);
}

