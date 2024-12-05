#include "main.h"

/**
* create_file - create a function that create a file
* @filename: pointeur on the name of the file we have to create
* @text_content: pointeur on the text on the file created
* Return: 1 on success or -1 if it failed
*/

int create_file(const char *filename, char *text_content)
{
int error_flag = 0;
int count = 0;
int fd = 0;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);
if (text_content == NULL)
{
close(fd);
return (1);
}
while (text_content[count])
{
count++;
}
error_flag = write(fd, text_content, count);
if (error_flag == -1)
{
close(fd);
return (-1);
}
close(fd);
return (1);
}
