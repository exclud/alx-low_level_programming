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
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
for (i = 0; i < 6; i++)
{
putchar(i + 'a');
}
putchar('\n');
return (0);
}

