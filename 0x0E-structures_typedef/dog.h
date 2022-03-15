#ifndef DOG_H
#define DOG_H

/**
* struct dog - struct type
* @name: name dog
* @age: age dog
* @owner: owner dog
*/

typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog *h, char *name, float age, char *owner);
void print_dog(struct dog *h);
dog_t *other_dog(char *name, float age, char *owner);
void free_dog(dog_t *h);

#endif
