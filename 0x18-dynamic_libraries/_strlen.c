/**
 * _strlen - returns the length of a string
 * @s: The string to measure
 *
 * Return: length of string
 */
int _strlen(char *s)
{
    int length = 0;

    while (*s++)
        length++;

    return (length);
}
