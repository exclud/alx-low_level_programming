#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees the memory allocated for a dog_t object
 * @d: a pointer to the dog_t object to free
 */
void free_dog(dog_t *d)
{
if (d != NULL) {
/* Free the memory allocated for the name */
free(d->name);

/* Free the memory allocated for the owner */
free(d->owner);

/* Free the memory allocated for the dog */
free(d);
}
}

