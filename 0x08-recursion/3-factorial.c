#include"main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: number to calculate factorial of
 *
 * Return: factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
if (n < 0)
{
return (-1); /* error case */
}
else if (n == 0)
{
return (1); /* base case */
}
else
{
return (n * factorial(n - 1)); /* recursive case */
}
}

