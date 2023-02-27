/**
 * _puts - prints a string to stdout, followed by a new line
 * @str: string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}

