#include "main.h"


/**
* read_textfile - function that reads a text file and
* prints it to the POSIX standard output.
* @filename: files we must print
* @letters: number of caracters to print
* Return: number of letters to print
or 0 if it failed, if it's NULL
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
/* pointeur vers des caractères */
int fd = 0;
/* entier dont on connait pas la valeur filedescriptor*/
ssize_t bytes_read;
/* valeur de retour count de bytes */
if (filename == NULL)
return (0);
/* verification s'il existe */
fd = open(filename, O_RDONLY);
/* ouvrir son fichier pr connaitre fd, permission */
buffer = malloc(sizeof(char *)* letters);
if (buffer == NULL)
return (0);
if (fd == -1)
{
free(buffer);
return (0);
}
bytes_read = read(fd, buffer, letters);
/* read sert à lire un fd */
if (bytes_read == -1)
{
free(buffer);
close(fd);
return (0);
}
write(STDOUT_FILENO, buffer, bytes_read);
free(buffer);
close(fd);
return (bytes_read);
}
