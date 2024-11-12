#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Print une variable de type struct dog
 * @d: Pointeur vers la structure à initialiser
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Propriétaire du chien
 *
 * Retour: Rien (void)
 */

void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
if (d->owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}
