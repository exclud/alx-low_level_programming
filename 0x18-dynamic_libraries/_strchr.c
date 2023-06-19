/**
 * _strchr - locates the first occurrence of c in the string pointed to by s
 * @s: string
 * @c: character to locate
 *
 * Return: a pointer to the located character, or NULL if the character does not appear
 */
char *_strchr(char *s, char c)
{
    while (*s) {
        if (*s == c)
            return (s);
        s++;
    }

    return (0);
}
