#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

typedef struct dog_t
{
char *name;
float age;
char *owner;
};

/**
* new_dog - create a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: pointer on new dog or NULL
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
/* pointer on new dog*/
new_dog =malloc(sizeof(dog_t));
/* allocate memory for new dog */
if (new_dog == NULL)
return (NULL);
/* return si c'est fail */
/* allocate and cpy the string*/
if (name != NULL)
{
new_dog->name = strdup(name);
/* strdup allocates memory */
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
}
else
{
new_dog->name = NULL;
}
new_dog->age = age;
if (owner != NULL)
{
new_dog->owner = strdup(owner);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
}
else
{
new_dog->owner = NULL;
}
return (new_dog);
}
