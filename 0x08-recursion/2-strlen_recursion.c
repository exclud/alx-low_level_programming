/**
 * _strlen_recursion - Returns the length of a string.
 * @s: Pointer to the string to be measured.
 *
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}

