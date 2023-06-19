/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to check.
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

/**
 * _strlen - Computes the length of a string.
 * @s: The string to compute the length of.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    int len = 0;

    while (*s++)
        len++;

    return (len);
}

/**
 * _puts - Outputs a string followed by a newline.
 * @s: The string to output.
 * Return: Nothing.
 */
void _puts(char *s)
{
    while (*s)
        _putchar(*s++);
    _putchar('\n');
}

/**
 * _strcpy - Copies the string pointed to by src, including the
 *           terminating null byte, to the buffer pointed to by dest.
 * @dest: The buffer to copy to.
 * @src: The string to copy.
 * Return: A pointer to the destination string dest.
 */
char *_strcpy(char *dest, char *src)
{
    char *dest_start = dest;

    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';
    return (dest_start);
}

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
    int res = 0;
    int sign = 1;
    int i = 0;

    if (*s == '-')
    {
        sign = -1;
        i++;
    }

    for (; s[i] != '\0'; ++i)
    {
        res = res * 10 + s[i] - '0';
    }

    return sign * res;
}
