/**
 * is_prime_number - Checks if a given integer is a prime number.
 *
 * @n: The integer to check.
 *
 * Return: 1 if the integer is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
if (n < 2)
return (0);

if (n == 2)
return (1);

if (n % 2 == 0)
return (0);

if (n == 3)
return (1);

if (n % 3 == 0)
return (0);

if (n == 5)
return (1);

if (n % 5 == 0)
return (0);

if (n == 7)
return (1);

if (n % 7 == 0)
return (0);

return (1);
}

