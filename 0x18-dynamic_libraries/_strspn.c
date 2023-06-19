/**
 * _strspn - calculates the length of the initial segment of s which consists entirely of bytes in accept
 * @s: string
 * @accept: bytes to locate
 *
 * Return: the number of bytes in the initial segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int len = 0;
    char *ptr;

    while (*s) {
        for (ptr = accept; *ptr; ptr++) {
            if (*s == *ptr) {
                len++;
                break;
            }

            if (*ptr == '\0')
                return (len);
        }
        s++;
    }

    return (len);
}
