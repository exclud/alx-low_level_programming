/**
 * _strstr - finds the first occurrence of the substring needle in the string haystack
 * @haystack: the string
 * @needle: the substring
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
    char *p;
    char *start = needle;

    while (*haystack) {
        for (p = haystack, needle = start; *p && (*p == *needle); p++, needle++)
            ;

        if (*needle == '\0')
            return (haystack);

        haystack++;
    }

    return (0);
}
