/**
 * _atoi - convert a string to an integer
 * @s: The source string
 *
 * Return: The integer value of the converted string
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    char *ptr = s;
    
    while (*ptr) {
        if (*ptr == '-')
            sign *= -1;
        else if (*ptr >= '0' && *ptr <= '9')
            result = result * 10 + (*ptr - '0');
        else if (result > 0)
            break;
        ptr++;
    }

    return (result * sign);
}
