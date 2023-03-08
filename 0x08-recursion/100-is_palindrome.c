/**
 * _is_palindrome - Recursively checks if a given string is a palindrome.
 *
 * @s: The string to check.
 * @start: The starting index of the current substring being checked.
 * @end: The ending index of the current substring being checked.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int _is_palindrome(char *s, int start, int end)
{
if (start >= end)
return (1);

if (s[start] != s[end])
return (0);

return (_is_palindrome(s, start + 1, end - 1));
}

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

while (s[length] != '\0')
length++;

return (_is_palindrome(s, 0, length - 1));
}

