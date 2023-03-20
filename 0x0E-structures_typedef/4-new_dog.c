#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog_t object and returns a pointer to it
 * @name: a string representing the dog's name
 * @age: a float representing the dog's age
 * @owner: a string representing the dog's owner
 *
 * Return: a pointer to the new dog_t object, or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
/* Allocate memory for the new dog */
dog_t *new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL) {
return NULL;
}

/* Allocate memory for the name and copy it */
new_dog->name = malloc(strlen(name) + 1);
if (new_dog->name == NULL) {
free(new_dog);
return NULL;
}
strcpy(new_dog->name, name);

/* Allocate memory for the owner and copy it */
new_dog->owner = malloc(strlen(owner) + 1);
if (new_dog->owner == NULL) {
free(new_dog->name);
free(new_dog);
return NULL;
}
strcpy(new_dog->owner, owner);

/* Set the age */
new_dog->age = age;

/* Return a pointer to the new dog */
return new_dog;
}

