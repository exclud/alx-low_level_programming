#include <stdlib.h>
#include <string.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;

if (nmemb == 0 || size == 0)
return NULL;

ptr = malloc(nmemb * size);

if (ptr == NULL)
return NULL;

/* set memory to zero */
memset(ptr, 0, nmemb * size);

return ptr;
}

