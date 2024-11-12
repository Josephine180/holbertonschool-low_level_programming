#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initialise une variable de type struct dog
 * @d: Pointeur vers la structure à initialiser
 * @name: Nom du chien
 * @age: Âge du chien* @owner: Propriétaire du chien
 *
 * Retour: Rien (void)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != NULL)  /* Vérifier si le pointeur n'est pas NULL */
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}
