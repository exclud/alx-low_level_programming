#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: Prints the number of arguments passed into the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 * Return: 0 (Success)
 */

int main(int argc, char **argv)
{
printf("%d\n", argc - 1);
return (0);
}
