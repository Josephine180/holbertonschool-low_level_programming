#include <stdlib.h>

/**
 * free_grid - Libère la mémoire allouée pour une grille 2D.
 * @grid: Un pointeur vers la grille 2D.
 * @height: Le nombre de lignes de la grille.
 */

void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || grid == 0)
return;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
