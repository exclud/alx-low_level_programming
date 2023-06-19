#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @dest: The destination memory area.
 * @src: The source memory area.
 * @n: The number of bytes to be copied.
 * Return: A pointer to the copied memory area dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *start = dest;

    while (n-- > 0)
        *dest++ = *src++;

    return (start);
}

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to locate.
 * Return: A pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
    while (*s)
    {
        if (*s == c)
            return (s);
        s++;
    }

    if (*s == c)
        return (s);

    return (0);
}

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be scanned.
 * @accept: The string containing the characters to match.
 * Return: The number of characters in the initial segment of s which
 *         consist only of characters from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int len = 0;

    while (*s && strchr(accept, *s++))
        len++;

    return (len);
}

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The string containing the bytes to match.
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s)
    {
        if (strchr(accept, *s))
            return (s);
        s++;
    }

    return (0);
}

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 * Return: A pointer to the beginning of the located substring, or NULL if
 *         the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    char *h;
    char *n;

    while (*haystack)
    {
        h = haystack;
        n = needle;

        while (*haystack && *n && *haystack == *n)
        {
            haystack++;
            n++;
        }

        if (!*n)
            return (h);

        haystack = h + 1;
    }

    return (0);
}
