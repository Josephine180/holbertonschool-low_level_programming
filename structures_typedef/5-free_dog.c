#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog.
 * @d: Pointer to the dog structure to be freed.
 *
 * This function frees the memory allocated for the dog's name,
 * owner's name, and the dog structure itself.
 */
void free_dog(dog_t *d)
{
if (d == NULL)
/* If the pointer is NULL, do nothing */
return;
/* Free the dynamically allocated name if it exists */
if (d->name != NULL)
free(d->name);
/* Free the dynamically allocated owner if it exists */
if (d->owner != NULL)
free(d->owner);
/* Finally, free the memory for the dog structure itself */
free(d);
}
