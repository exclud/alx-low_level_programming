#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to get the length of
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
 * rev_string - reverses a string
 * @s: the string to reverse
 */
void rev_string(char *s)
{
int i, j;
char tmp;

j = _strlen(s) - 1;

for (i = 0; i < j; i++, j--)
{
tmp = s[i];
s[i] = s[j];
s[j] = tmp;
}
}

