#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
return (c >= '0' && c <= '9');
}

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
int sign = 1;
int value = 0;

if (*s == '-')
{
sign = -1;
s++;
}

while (*s != '\0')
{
if (!_isdigit(*s))
{
printf("Error\n");
exit(98);
}

value = value * 10 + (*s - '0');
s++;
}

return (value * sign);
}

/**
 * print_product - prints the product of two numbers
 * @num1: the first number
 * @num2: the second number
 */
void print_product(int num1, int num2)
{
int product = num1 * num2;
printf("%d\n", product);
}

/**
 * main - the entry point of the program
 * @argc: the number of command-line arguments
 * @argv: an array of command-line argument strings
 *
 * Return: 0 if successful, 98 if there was an error
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (98);
}

int num1 = _atoi(argv[1]);
int num2 = _atoi(argv[2]);

print_product(num1, num2);

return (0);
}

