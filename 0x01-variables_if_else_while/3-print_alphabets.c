#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - print alphabets
* Return: 0
*/
int main(void)
{
char letter;
char letterM;

for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
for (letterM = 'A'; letterM <= 'Z'; letterM++)
putchar(letterM);
putchar('\n');
return (0);
}
