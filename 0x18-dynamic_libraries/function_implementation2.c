/**
 * _strcat - Appends the src string to the dest string, overwriting the
 *           terminating null byte at the end of dest, and then adds a terminating null byte.
 * @dest: The destination string.
 * @src: The source string.
 * Return: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
    char *dest_start = dest;

    while (*dest)
        dest++;
    while (*src)
        *dest++ = *src++;
    *dest = '\0';

    return (dest_start);
}

/**
 * _strncat - Appends the first n characters from src string to the dest string,
 *            overwriting the terminating null byte at the end of dest, and then
 *            adds a terminating null byte.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The number of characters to be appended.
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
    char *dest_start = dest;

    while (*dest)
        dest++;
    while (n-- > 0 && *src)
        *dest++ = *src++;
    *dest = '\0';

    return (dest_start);
}

/**
 * _strncpy - Copies at most n bytes from src into dest.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The number of bytes to be copied.
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
    char *dest_start = dest;

    while (n-- > 0)
    {
        if (*src)
        {
            *dest++ = *src++;
        }
        else
        {
            *dest++ = '\0';
        }
    }

    return (dest_start);
}

/**
 * _strcmp - Compares two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: The difference between the two strings.
 */
int _strcmp(char *s1, char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }

    return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/**
 * _memset - Fills memory with a constant byte.
 * @s: The memory area to be filled.
 * @b: The constant byte.
 * @n: The number of bytes to be filled.
 * Return: A pointer to the filled memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
    char *start = s;

    while (n-- > 0)
        *s++ = b;

    return (start);
}
