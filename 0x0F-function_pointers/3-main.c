#include "3-calc.h"

/**
* main - contain your function only
* @argc: number of arguments
* @argv: pointer
* Return: 0
*/

int main(int argc, char *argv[])
{
int n1;
int n2;
char *value;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

n1 = atoi(argv[1]);
value = argv[2];
n2 = atoi(argv[3]);

if (get_op_func(value) == NULL || value[1] != '\0')
{
printf("Error\n");
exit(99);
}

if ((*value == '/' && n2 == 0) || (*value == '%' && n2 == 0))
{
printf("Error\n");
exit(100);
}

printf("%d\n", get_op_func(value)(n1, n2));

return (0);
}
