#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
* create_file - Creates a file and writes text content to it.
* @filename: The name of the file to create.
* @text_content: The text content to write to the file.
*
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
int fd, write_status, i;

if (filename == NULL)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
for (i = 0; text_content[i] != '\0'; i++)
{
/* Write each character of text_content to the file */
write_status = write(fd, &text_content[i], 1);
if (write_status == -1)
{
close(fd);
return (-1);
}
}
}

close(fd);
return (1);
}