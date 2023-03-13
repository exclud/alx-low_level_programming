#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: If concatenation is successful - a pointer to a newly allocated space in memory
 * containing the concatenated strings, otherwise - NULL.
 */
char *str_concat(char *s1, char *s2)
{
char *concat_str;
unsigned int s1_len = 0, s2_len = 0, i, j;

/* Treat NULL strings as empty strings */
if (s1 == NULL)
{
s1 = "";
}

if (s2 == NULL)
{
s2 = "";
}

/* Calculate the lengths of the input strings */
while (s1[s1_len] != '\0')
{
s1_len++;
}

while (s2[s2_len] != '\0')
{
s2_len++;
}

/* Allocate memory for the concatenated string */
concat_str = malloc(sizeof(char) * (s1_len + s2_len + 1));

if (concat_str == NULL)
{
return (NULL);
}

/* Copy the first string into the concatenated string */
for (i = 0; i < s1_len; i++)
{
concat_str[i] = s1[i];
}

/* Copy the second string into the concatenated string */
for (j = 0; j < s2_len; j++)
{
concat_str[i + j] = s2[j];
}

/* Add a null terminator to the end of the concatenated string */
concat_str[i + j] = '\0';

return (concat_str);
}

