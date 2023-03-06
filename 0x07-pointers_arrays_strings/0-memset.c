/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area to be filled
 * @b: constant byte to fill memory with
 * @n: number of bytes to fill
 *
 * Return: pointer to the filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;

while (n-- > 0)
*ptr++ = b;

return (s);
}

