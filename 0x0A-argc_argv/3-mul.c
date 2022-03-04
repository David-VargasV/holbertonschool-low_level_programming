#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - print the number
* @argc: size of argv
* @argv: program
* Return: 0
*/

int main(int argc, char *argv[])
{
int result;

if (argc == 3)
{
result = atoi(argv[1]) * atoi(argv[2]);
printf("%i\n", result);
}
else
printf("Error\n");

return (1);
}
