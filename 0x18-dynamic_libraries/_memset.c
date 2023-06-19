/**
 * _memset - fills the first n bytes of the memory area pointed to by s with the constant byte b
 * @s: memory area to be filled
 * @b: constant byte
 * @n: number of bytes to be filled
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
    char *ptr = s;

    while (n--)
        *ptr++ = b;

    return (s);
}
