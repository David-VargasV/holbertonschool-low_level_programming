#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - adds positive numbers
* @argc: size of argv
* @argv: program
* Return: 0
*/

int main(int argc, char *argv[])
{
int number;
int value;
int add = 0;

for (number = 1; number < argc; number++)
{
for (value = 0; argv[number][value]; value++)
{
if (argv[number][value] < '0' || argv[number][value] > '9')
{
printf("Error\n");
return (1);
}
}
add += atoi(argv[number]);
}
printf("%d\n", add);
return (0);
}
