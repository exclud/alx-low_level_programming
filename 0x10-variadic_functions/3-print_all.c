#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything
 * @format: A list of types of arguments passed to the function
 * @...: The arguments to print
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0, j;
char *separator = "";
char *str;

const char formats[] = "cifs";

va_start(args, format);

while (format && format[i])
{
j = 0;

while (formats[j])
{
if (format[i] == formats[j])
{
printf("%s", separator);

switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);

if (str == NULL)
str = "(nil)";

printf("%s", str);
break;
}

separator = ", ";
}

j++;
}

i++;
}

printf("\n");

va_end(args);
}

