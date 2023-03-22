/**
 * print_name - prints a name
 * @name: a pointer to the name string
 * @f: a function pointer to a function
 *
 * Description: This function takes a name string 
 * pointed to by f, passing the name string as an argument. 
 * print the name in the desired format.
 */
void print_name(char *name, void (*f)(char *))
{
if (name != 0 && f != 0)
f(name);
}

