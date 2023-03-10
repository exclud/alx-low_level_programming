#include "main.h"

/**
 * _puts - prints a string to stdout
 * @s: string to be printed
 */
void _puts(char *s)
{
	while (*s)
		_putchar(*s++);
}

