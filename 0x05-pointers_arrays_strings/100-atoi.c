#include "main.h"
#include <stdio.h>

/**
 * _atoi - Convert a string to an integer
 * @s: Pointer to the string to convert
 *
 * Return: The integer value of the string, or 0 if no valid integer found
 */
int _atoi(char *s)
{
int sign = 1, num = 0, started = 0;

while (*s)
{
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
{
num = (num * 10) + (*s - '0');
started = 1;
}
else if (started)
break;

s++;
}

return num * sign;
}

