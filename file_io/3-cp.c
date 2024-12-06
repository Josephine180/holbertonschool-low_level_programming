#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

#define BUFFER_SIZE 1024

/**
* main - entry point
* @argc: nombre of argument
* @argv: double_pointeur to strings
* Return: 1(success), -1(error)
*/

void error_exit(const char *message, int code)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(code);
}

void close_fd(int fd)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

int main(int argc, char *argv[])
{
int fd_from, fd_to, error_flag;
char *buffer;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffer = malloc(sizeof(char) * BUFFER_SIZE);
if (buffer == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't allocate memory\n");
exit(99);
}
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
free(buffer);
close_fd(fd_from);
exit(99);
}
while ((error_flag = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
if (write(fd_to, buffer, error_flag) != error_flag) {
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
free(buffer);
close_fd(fd_from);
close_fd(fd_to);
exit(99);
}
}
if (error_flag == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
close_fd(fd_from);
close_fd(fd_to);
exit(98);
}
free(buffer);
close_fd(fd_from);
close_fd(fd_to);
return (0);
}
