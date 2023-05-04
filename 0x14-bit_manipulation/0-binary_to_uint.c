/**
 * binary_to_uint - converts a binary string to an unsigned integer
 * @b: pointer to the binary string
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1, or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
unsigned int bit;

if (b == 0)
return (0);

for (; *b != '\0'; b++)
{
if (*b != '0' && *b != '1')
return (0);

bit = *b - '0';
result = (result << 1) | bit;
}

return (result);
}
