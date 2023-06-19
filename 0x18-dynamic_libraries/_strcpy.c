/**
 * _strcpy - copies the string pointed to by src, including the 
 *           terminating null byte, to the buffer pointed to by dest
 * @dest: The destination to copy to
 * @src: The source to copy from
 *
 * Return: a pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    char *original_dest = dest;

    while ((*dest++ = *src++));

    return original_dest;
}
