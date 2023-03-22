/**
 * op_add - returns the sum of a and b
 * @a: integer input
 * @b: integer input
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: integer input
 * @b: integer input
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: integer input
 * @b: integer input
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - returns the result of the division of a by b
 * @a: integer input
 * @b: integer input
 *
 * Return: result of division of a by b
 *         If b is 0, returns 0
 */
int op_div(int a, int b)
{
if (b == 0)
{
return (0);
}
return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: integer input
 * @b: integer input
 *
 * Return: remainder of the division of a by b
 *         If b is 0, returns 0
 */
int op_mod(int a, int b)
{
if (b == 0)
{
return (0);
}
return (a % b);
}

