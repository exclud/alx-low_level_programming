#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints the string "piece of art,"
 *              followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void) {
char letter = 'a';
while (letter <= 'z') {
if (letter != 'e' && letter != 'q') {
putchar(letter);
letter++;
} else {
letter++;
}
}
putchar('\n');
return 0;
}


