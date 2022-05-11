#ifndef DOG_H
#define DOG_H
#include <stddef.h>
/**
* struct dog - struct representing a dog
* @name: name of dog
* @age: age of dog
* @owner: name of owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *str);
char *_strcopy(char *dest, char *src);
void free_dog(dog_t *d);
#endif
