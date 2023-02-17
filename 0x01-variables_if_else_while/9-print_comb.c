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
int i = 0; 
while (i < 10)
{
putchar(i + '0');        
if (i != 9)
{
putchar(',');
putchar(' ');
}        
i++;
} 
putchar('\n');    
return (0);
}


