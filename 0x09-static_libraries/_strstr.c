#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to search for
 *
 * Return: pointer to the beginning of the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
    char *start = haystack;
    char *find;
    char *substr;

    while (*start != '\0')
    {
        find = start;
        substr = needle;

        while (*substr == *find && *substr != '\0' && *find != '\0')
        {
            find++;
            substr++;
        }

        if (*substr == '\0')
            return start;

        start++;
    }

    return (0);
}


