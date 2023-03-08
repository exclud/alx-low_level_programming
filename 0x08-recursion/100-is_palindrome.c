/**
 * is_palindrome - Checks if a given string is a palindrome.
 *
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
int length = 0;
int i;

while (s[length] != '\0')
length++;

for (i = 0; i < length / 2; i++)
{
if (s[i] != s[length - i - 1])
return (0);
}

return (1);
}

