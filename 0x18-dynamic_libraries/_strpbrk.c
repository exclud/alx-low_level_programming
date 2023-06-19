/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string
 * @accept: the byte set
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
    char *ptr;

    while (*s) {
        for (ptr = accept; *ptr; ptr++) {
            if (*s == *ptr)
                return (s);
        }
        s++;
    }

    return (0);
}
