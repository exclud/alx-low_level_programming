#include"main.h"
/**
 * _pow_recursion - calculates x raised to the power of y
 * @x: base value
 * @y: power value
 *
 * Return: x raised to the power of y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1); /* error case */
}
else if (y == 0)
{
return (1); /* base case */
}
else
{
return (x * _pow_recursion(x, y - 1)); /* recursive case */
}
}

