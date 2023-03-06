#include <stdio.h>

/**

print_diagsums - prints the sum of the two diagonals of a square matrix of integers.

@a: pointer to the array of integers

@size: size of the square matrix

Return: void
*/
void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;

/* Sum the elements on the first diagonal */
for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
}

/* Sum the elements on the second diagonal */
for (i = 0; i < size; i++)
{
sum2 += a[i * size + (size - 1 - i)];
}

/* Print the sums */
printf("Sum of first diagonal: %d\n", sum1);
printf("Sum of second diagonal: %d\n", sum2);
}




