/**
 * _strcmp - Compare two strings.
 * @s1: First string to compare.
 * @s2: Second string to compare.
 *
 * Return: An integer greater than, equal to, or less than 0, depending on
 * whether the string s1 is greater than, equal to, or less than the string s2.
 */
int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
}
return (s1[i] - s2[i]);
}
