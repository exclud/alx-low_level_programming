#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 if successful, otherwise an error code
 */
int main(int argc, char *argv[])
{
    int bytes, i;
    char *main_ptr;

    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    bytes = atoi(argv[1]);

    if (bytes < 0)
    {
        printf("Error\n");
        return 2;
    }

    main_ptr = (char *)main;

    for (i = 0; i < bytes; i++)
    {
        printf("%02x", *(main_ptr + i) & 0xFF);
    }

    printf("\n");

    return 0;
}

