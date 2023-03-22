/**
 * int_index - searches for an integer in an array
 * @array: a pointer to the array to search
 * @size: the number of elements in the array
 * @cmp: a pointer to the function used to compare values
 *
 * Description: This function takes an array of integers 
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == 0 || cmp == 0 || size <= 0)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}

return (-1);
}

