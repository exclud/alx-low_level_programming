/**
 * _sqrt_helper - Helper function to find the natural square root of a number.
 *
 * @n: The number to find the square root of.
 * @i: The current guess for the square root.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root.
 */

int _sqrt_helper(int n, int i)
{
/* Base case */
if (i * i == n)
return (i);

/* If i is greater than the square root, n does not have a natural square root */
if (i * i > n)
return (-1);

/* Recursive case */
return (_sqrt_helper(n, i + 1));
}


/**
 * _sqrt_recursion - Finds the natural square root of a number using recursion.
 *
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root.
 */

int _sqrt_recursion(int n)
{
/* Edge case: n is negative */
if (n < 0)
return (-1);

/* Base case: n is 0 or 1 */
if (n == 0 || n == 1)
return (n);

/* Recursive case */
return (_sqrt_helper(n, 1));
}

