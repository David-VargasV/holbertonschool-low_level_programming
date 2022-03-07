#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory
* @str: pointer
* Return: string or NULL
*/

char *_strdup(char *str)
{
char *string;
unsigned int s;
int n;

if (str == NULL)
return (NULL);
for (n = 0; str[n] != '\0'; n++)
;
string = (char *)malloc(n + 1 * sizeof(char));
if (string != NULL)
{
for (s = 0; str[s] != '\0'; s++)
string[s] = str[s];
}
else
{
return (NULL);
}
string[s] = '\0';
return (string);
}
