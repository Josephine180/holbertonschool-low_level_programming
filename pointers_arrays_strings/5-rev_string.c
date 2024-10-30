#include "main.h"

/**
* print_rev - print in reverse 
* @s : caractere a pointer
* Result : print in reverse
*/

void rev_string(char *s)
{
   /* declaration variable temporaire de stockage */
  ;char *ptr = s; /* creation d'un deuxieme pointeur de la meme valeur que le premier*/
  while(*ptr) /* creation boucle*/
    ptr++; /* le pointeur 2 va a la fin de la string*/
  ptr--; /* decrementer pour avoir le dernier caractere de la string*/
  while (s <= ptr) /* on veut que les pointeurs s'arretent et ne se croisent pas*/
{
  char temp = *s; /* on fait un switch des deux valeurs des adresses des pointeurs*/
  *s = *ptr; /* pointeur de gauche prend la valeur de l'adresse contenue du pointeur de droite.*/ 
  *ptr = temp; /* pointeur de droite prend la valeur contenue dans la variable de stockage*/
  ptr--; /* decremente le pointeur de droite (en gros aller sur la gauche ) */
  s++; /* incremente le pointeur de gauche pour aller a droite ( les pointeurs se rejoignent)*/
}  
}
