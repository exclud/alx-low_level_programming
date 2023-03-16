#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 * Return: pointer to the concatenated string or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, len1 = 0, len2 = 0;
char *new_str;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;

while (s2[len2] != '\0')
len2++;

if (n >= len2)
n = len2;

new_str = malloc(sizeof(char) * (len1 + n + 1));

if (new_str == NULL)
return (NULL);

for (i = 0; i < len1; i++)
new_str[i] = s1[i];

for (j = 0; j < n; j++)
{
new_str[i] = s2[j];
i++;
}

new_str[i] = '\0';

return (new_str);
}

