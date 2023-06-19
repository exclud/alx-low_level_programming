/**
 * _strncpy - copies at most n characters from src into dest
 * @dest: destination string
 * @src: source string
 * @n: number of characters to be copied
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
    char *ptr = dest;

    while (n-- && (*ptr = *src++))
        ptr++;

    if (n >= 0)
        *ptr = '\0';

    return (dest);
}

