#include "main.h"

/**
 * _strlen - computes the length of a string
 * @s: string to be processed
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}

