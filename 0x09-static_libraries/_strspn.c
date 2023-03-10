#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string to be searched
 * @accept: Pointer to the string containing the characters to match
 *
 * Return: The number of bytes in the initial segment of s which consist
 *         only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, j, n;

    n = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                n++;
                break;
            }
        }
        if (accept[j] == '\0')
            break;
    }

    return (n);
}

