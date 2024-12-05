#include "main.h"

/**
* append_text_to_file - Write function that appends text at the end of a file.
* @filename: pointeurs on name of the file
* @text_content: pointeur null terminated string to add at the end
* Return: 1 on success, -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
int error_flag = 0;
int count = 0;
int fd = 0;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[count])
count++;
error_flag = write(fd, text_content, count);
if (error_flag == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
