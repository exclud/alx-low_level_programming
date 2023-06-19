/**
 * _strcat - concatenate two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
    char *ptr = dest;

    while (*ptr)
        ptr++;
    while ((*ptr++ = *src++));

    return (dest);
}
