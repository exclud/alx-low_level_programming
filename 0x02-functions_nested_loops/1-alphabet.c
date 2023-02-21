#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 *
 * Return: void
 */
void print_alphabet(void)
{
int i;
for (i = 0 ; i < 26 ; i++)
{
_putchar (i + 'a');
}
_putchar ('\n');
}
