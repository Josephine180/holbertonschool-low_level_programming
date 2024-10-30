#include "main.h"

/*
* puts_half - print the half of the string
* @str: pointer
* Return: half string
*/

void puts_half(char *str)
{
	int len;
	/* declarer variable pour longueur de la string */
	int i;

	for (len = 0; str[len] != '\0'; len ++)
	/* taille totale de string str */
	if (len % 2 == 0 )
		i = len / 2;
	/* i divise  par 2 si cest pair */
	else
		i = (len - 1) / 2;
	/* on enleve 1 si c'est impair, et on ajoute 1 */
	/* 9  moins 1 8 divise par 2 4 + 1 5*/
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
