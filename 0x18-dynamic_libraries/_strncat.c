/**
 * _strncat - concatenate n characters from source string to 
 *            the destination string
 * @dest: destination string
 * @src: source string
 * @n: number of characters to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    char *ptr = dest;

    while (*ptr)
        ptr++;
    while (n-- && (*ptr = *src++))
        ptr++;

    if (n < 0)
        *ptr = '\0';

    return (dest);
}
