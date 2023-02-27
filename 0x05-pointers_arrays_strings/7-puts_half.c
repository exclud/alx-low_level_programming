#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to measure
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
int len = 0;

while (*s != '\0')
{
len++;
s++;
}
return (len);
}

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: the string to print
 */
void puts_half(char *str)
{
int len = _strlen(str);
int i, n;

if (len % 2 == 0)
n = len / 2;
else
n = (len - 1) / 2;

for (i = n; i < len; i++)
_putchar(str[i]);
_putchar('\n');
}

