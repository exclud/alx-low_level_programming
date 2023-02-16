#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints the string "a piece of art,"
 *              followed by a new line.
 *
 * Return: Always 0 (success)
 */
#include <unistd.h>

int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}


