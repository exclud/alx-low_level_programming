/**
 * _memcpy - Copies n bytes from memory area src to memory area dest.
 * @dest: A pointer to the destination memory area.
 * @src: A pointer to the source memory area.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *dest_ptr = dest;
char *src_ptr = src;

while (n--)
*dest_ptr++ = *src_ptr++;

return dest;
}

