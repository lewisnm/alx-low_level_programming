#ifndef DOG_FILE
#define DOG_FILE
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct dog- dog's basic description
 * @name: dog's name
 * @age: dog's age
 * @owner: name of owner
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
