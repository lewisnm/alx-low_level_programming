#ifndef HEADER_FILE
#define HEADER_FILE

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

/**
 * dog_t - typedef for struct dog
 *
 */

typedef struct dog dog_t;

#include <stdlib.h>
#include <stdio.h>
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
