#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 if successful, otherwise an error code
 */
int main(int argc, char *argv[])
{
int a, b, result;
int (*op_func)(int, int);

if (argc != 4)
{
printf("Error\n");
return (1);
}

a = atoi(argv[1]);
b = atoi(argv[3]);
op_func = get_op_func(argv[2]);

if (op_func == NULL)
{
printf("Error\n");
return (2);
}

result = op_func(a, b);
printf("%d\n", result);

return (0);
}

