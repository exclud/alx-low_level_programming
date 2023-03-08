/**
 * is_prime_number - Checks if a given integer is a prime number.
 *
 * @n: The integer to be checked.
 *
 * Return: 1 if the integer is a prime number, otherwise 0.
 */

int is_prime_number(int n)
{
int i;

if (n <= 1) /* 1 and any number less than 1 are not primes */
return (0);

for (i = 2; i <= n / 2; i++) /* Check for factors */
{
if (n % i == 0)
return (0); /* Not a prime number */
}

return (1); /* Prime number */
}

