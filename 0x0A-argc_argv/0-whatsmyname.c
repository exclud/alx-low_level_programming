#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the name of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 * Return: 0 (Success)
 */
int main(char *argv[])
{
char *program_name = argv[0];
printf("%s\n", program_name);
return(0);
}
