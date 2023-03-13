#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory containing a copy of the string given as parameter
 * @str: The string to be duplicated
 *
 * Return: If str is NULL or if memory allocation fails, returns NULL, otherwise returns a pointer to the duplicated string
 */
char *_strdup(char *str)
{
char *dup_str;
unsigned int len = 0, i;

if (str == NULL)
{
return (NULL);
}

/* Calculate the length of the input string */
while (str[len] != '\0')
{
len++;
}

/* Allocate memory for the duplicate string */
dup_str = malloc(sizeof(char) * (len + 1));

if (dup_str == NULL)
{
return (NULL);
}

/* Copy the input string into the duplicate string */
for (i = 0; i < len; i++)
{
dup_str[i] = str[i];
}

/* Add a null terminator to the end of the duplicate string */
dup_str[i] = '\0';

return (dup_str);
}

