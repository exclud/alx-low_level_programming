#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result or 0 if the result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1, len2, carry, sum, i, j;

len1 = _strlen(n1);
len2 = _strlen(n2);
if (len1 + 2 > size_r || len2 + 2 > size_r)
return (0);
i = len1 - 1;
j = len2 - 1;
carry = 0;
while (i >= 0 || j >= 0)
{
if (i >= 0)
carry += n1[i--] - '0';
if (j >= 0)
carry += n2[j--] - '0';
if (carry >= 10)
{
r[len1 > len2 ? len1 : len2] = carry % 10 + '0';
carry /= 10;
}
else
r[len1 > len2 ? len1 : len2] = carry + '0';
}
if (carry && len1 + 1 < size_r && len2 + 1 < size_r)
r[len1 > len2 ? len1 : len2] = carry + '0';
else if (carry)
return (0);
r[len1 > len2 ? len1 : len2 + 1] = '\0';
rev_string(r);
return (r);
}

/**
 * _strlen - calculates the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of s
 */
int _strlen(char *s)
{
int len;

for (len = 0; s[len]; len++);
return (len);
}

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
int i, j;
char temp;

i = 0;
while (s[i])
i++;
i--;
for (j = 0; j < i; j++, i--)
{
temp = s[j];
s[j] = s[i];
s[i] = temp;
}
}

