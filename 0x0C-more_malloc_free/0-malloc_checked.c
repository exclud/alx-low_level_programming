#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of memory to allocate
 *
 * Return: pointer to allocated memory
 *         if malloc fails, exit with status value of 98
 */
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
exit(98);

return (ptr);
}

