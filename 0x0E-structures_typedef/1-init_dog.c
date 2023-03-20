#include "dog.h"
#include "main.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the struct dog variable to initialize
 * @name: string representing the dog's name
 * @age: float representing the dog's age
 * @owner: string representing the dog's owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == 0)
return;

d->name = name;
d->age = age;
d->owner = owner;
}

