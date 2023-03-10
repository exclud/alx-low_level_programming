#include "main.h"

/**
 * _strcpy - copies a string to a destination buffer
 * @dest: destination buffer
 * @src: source string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while ((*dest++ = *src++))
		;

	return (ptr);
}

