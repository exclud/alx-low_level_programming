#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract the last digit from
 *
 * Return: the value of the last digit
 */
int custom_abs(int n)
{
if (n < 0)
{
return (-n);
}
else
{
return (n);
}
}

int print_last_digit(int n)
{
int last_digit;

last_digit = _abs(n % 10);  /* get the absolute value of the last digit */

_putchar(last_digit + '0'); /* print the last digit */

return (last_digit);
}

