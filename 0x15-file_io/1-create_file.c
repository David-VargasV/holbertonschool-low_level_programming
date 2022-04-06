#include "main.h"

/**
* create_file - function that creates a file.
* @filename: is the name of the file to create
* @text_content:  is a NULL terminated string to write to the file
* Return: 1 or -1
*/

int create_file(const char *filename, char *text_content)
{
int file, wfile, tmp = 0;

if (filename == NULL)
{
return (-1);
}

file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

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
