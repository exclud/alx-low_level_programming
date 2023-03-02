/**
 * cap_string - Capitalizes all words of a string.
 * @s: Pointer to the string to capitalize.
 *
 * Return: Pointer to the capitalized string.
 */
char *cap_string(char *s)
{
int i;

/* Capitalize the first character, if it's a letter */
if (s[0] >= 'a' && s[0] <= 'z')
s[0] -= 32;

/* Capitalize the rest of the characters, if they follow a separator */
for (i = 1; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
if (s[i-1] == ' ' || s[i-1] == '\t' || s[i-1] == '\n' ||
s[i-1] == ',' || s[i-1] == ';' || s[i-1] == '.' ||
s[i-1] == '!' || s[i-1] == '?' || s[i-1] == '"' ||
s[i-1] == '(' || s[i-1] == ')' || s[i-1] == '{' ||
s[i-1] == '}')
{
s[i] -= 32;
}
}
}

return (s);
}

