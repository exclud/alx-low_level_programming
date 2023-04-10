#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int bit_count = sizeof(n) * 8 - 1;
	int print_flag = 0;

	while (bit_count >= 0)
	{
    if ((n >> bit_count) & mask)
    {
    _putchar('1');
    print_flag = 1;
    }
    else if (print_flag)
    _putchar('0');
    bit_count--;
	}
	if (!print_flag)
    _putchar('0');
}

