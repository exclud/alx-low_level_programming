#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Assigns a random number to n and prints
 *              whether n is positive or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d is ", n);
if (n > 0)
{
printf("positive\n");
}
else if (n == 0)
{
printf("zero\n");
}
else
{
printf("negative\n");
}
return (0);
}
