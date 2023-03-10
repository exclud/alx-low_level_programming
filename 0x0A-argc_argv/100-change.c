#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for an amount of money
 * @argc: the number of arguments passed to the program
 * @argv: an array containing the arguments passed to the program
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
int cents, coins = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);

if (cents < 0)
{
printf("0\n");
return (0);
}

while (cents >= 25)
{
cents -= 25;
coins++;
}

while (cents >= 10)
{
cents -= 10;
coins++;
}

while (cents >= 5)
{
cents -= 5;
coins++;
}

while (cents >= 2)
{
cents -= 2;
coins++;
}

while (cents >= 1)
{
cents -= 1;
coins++;
}

printf("%d\n", coins);

return (0);
}

