/**
 * rot13 - Encodes a string using rot13
 * @s: Input string
 *
 * Return: Encoded string
 */
char *rot13(char *s)
{
int i, j;
char *original = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *encoded = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; original[j] != '\0'; j++)
{
if (s[i] == original[j])
{
s[i] = encoded[j];
break;
}
}
}

return (s);
}

