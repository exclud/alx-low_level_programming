/**
 * _putchar - Outputs a character.
 * @c: The character to output.
 * Return: Always 1.
 */
int _putchar(char c)
{
    write(1, &c, 1);
    return (1);
}

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to check.
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
    return (c >= 'a' && c <= 'z');
}

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character to check.
 * Return: 1 if the character is alphabetic, 0 otherwise.
 */
int _isalpha(int c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to compute the absolute value of.
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
    return (n < 0 ? -n : n);
}

/**
 * _isupper - Checks if a character is uppercase.
 * @c: The character to check.
 * Return: 1 if the character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
    return (c >= 'A' && c <= 'Z');
}
