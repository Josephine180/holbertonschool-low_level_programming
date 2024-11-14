#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include "main.h"
#include <stdlib.h>

/**
* _strdup - renvoi un pointeur sur nouvelle chaine
* @str: string
* Return: Null si str null, oui pointers
*/

char *_strdup(char *str)
{
int a = 0, i = 0;
char *s;
if (str == NULL)
/* str est null donc on retourne null */
return (NULL);
while (str[i])
/* on compte la longueur de la chaine */
{
i++;
}
s = malloc((sizeof(char) * i) +1);
/* alloue la memoire pour la chaine */
if (s == NULL)
return (NULL);
while (a < i)
/* copie la memoire la chaine allouée */
{
s[a] = str[a];
a++;
}
s[i] = '\0';
return (s);
}
/**
* new_dog - create a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: pointer on new dog or NULL
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
/* creation structure dog pour dogt_t*/
/* lié par dog.h */
dog = malloc(sizeof(dog_t));
/* on cherche la mémoire pour dog_t*/
if (dog == NULL)
{
return (NULL);
}
/*on verifie malloc */
dog->name = _strdup(name);
/*on verifie malloc */
if (dog->name == NULL)
{
return (NULL);
free(dog);
return (NULL);
}
dog->owner = _strdup(owner);
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
dog->age = age;
return (dog);
}
