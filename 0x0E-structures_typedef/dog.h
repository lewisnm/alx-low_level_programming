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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
