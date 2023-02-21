#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line.
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
