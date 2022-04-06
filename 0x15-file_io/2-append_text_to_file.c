#include "main.h"

/**
* append_text_to_file - function that appends text at the end of a file
* @filename:  is the name of the file
* @text_content: is the NULL terminated string to add at the end of the file
* Return: 1 or -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
int file, wfile, tmp = 0;

if (filename == NULL)
{
return (-1);
}

file = open(filename, O_APPEND | O_WRONLY);

if (file == -1)
{
return (-1);
}

while (text_content && text_content[tmp])
tmp++;

wfile = write(file, text_content, tmp);
if (wfile == -1)
{
return (-1);
}
close(file);
return (1);
}
