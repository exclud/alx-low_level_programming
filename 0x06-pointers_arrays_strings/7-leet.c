#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: string to encode
 *
 * Return: pointer to encoded string
 */

char *leet(char *str)
{
int i;
char leet_map[256] = {0};
char *leet_str = str;

for (i = 'a'; i <= 'z'; i++)
leet_map[i] = "4433007711"[i - 'a'];

for (i = 0; str[i]; i++)
if (leet_map[(unsigned char)str[i]])
leet_str[i] = leet_map[(unsigned char)str[i]];

return (leet_str);
}

