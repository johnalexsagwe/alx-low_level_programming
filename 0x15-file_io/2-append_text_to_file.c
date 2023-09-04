#include "main.h"

/**
* append_text_to_file - Appends text at the end of the file.
* @filename: Name of the file
* @text_content: NULL terminated string to add at file tail end
*
* Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, bytes_written = 0;

if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content)
{
while (text_content[bytes_written])
bytes_written++;
if (write(fd, text_content, bytes_written) != bytes_written)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
