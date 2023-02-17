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
int letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
