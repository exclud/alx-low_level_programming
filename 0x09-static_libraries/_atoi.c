#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: integer value of s
 */
int _atoi(char *s)
{
	int sign = 1, num = 0;

	if (*s == '-')
		sign = -1, s++;

	while (*s && _isdigit(*s))
		num = num * 10 + (*s++ - '0');

	return (sign * num);
}

