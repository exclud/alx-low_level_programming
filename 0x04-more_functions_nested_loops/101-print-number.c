#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to print
 */
void print_number(int n)
{
int divisor = 1;
int digit, is_negative = 0;

if (n < 0)
{
is_negative = 1;
n = -n;
}

/* Find the divisor */
while (n / divisor > 9)
divisor *= 10;

/* Print the digits */
while (divisor != 0)
{
digit = n / divisor;
_putchar(digit + '0');
n %= divisor;
divisor /= 10;
}

/* Print the sign if necessary */
if (is_negative)
_putchar('-');
}

