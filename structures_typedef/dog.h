#ifndef DOG
#define DOG

/**
 * struct dog - Struct dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
