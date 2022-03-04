#include "main.h"
#include <stdio.h>

/**
* main - prints the number of arguments
* @argc: size of argv
* @argv: program
* Return: 0
*/

int main(int argc, char *argv[])
{
int x;
for (x = 0; x < argc; x++)
printf("%s\n", argv[x]);

return (0);
}
