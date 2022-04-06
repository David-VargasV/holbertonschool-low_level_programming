#include "main.h"

/**
* read_textfile - function that reads a text file and prints
* it to the POSIX standard output.
*
* @filename: is the name
* @letters: is the number of letters it should read and print
* Return: value or 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
char *tmp;
int file, rfile, wfile;

tmp = (char *)malloc(sizeof(char) * letters);
if (filename == NULL)
{
return (0);
}

file = open(filename, O_RDONLY);
if (file == -1)
{
return (0);
}
rfile = read(file, tmp, letters);
if (rfile == -1)
{
return (0);
}
wfile = write(STDOUT_FILENO, tmp, rfile);
if (wfile == -1)
{
return (0);
}
close(file);
return (wfile);
}
