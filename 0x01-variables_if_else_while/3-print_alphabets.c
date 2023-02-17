#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints the string "piece of art,"
 *              followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
for (i = 0; i < 26; i++)
{
putchar('a' + i);
}
for (i = 0; i < 26; i++)
{
putchar('A' + i);
}
putchar('\n');
return (0);
}
