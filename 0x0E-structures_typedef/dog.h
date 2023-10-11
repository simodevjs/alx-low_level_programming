#ifndef DOG_H
#define DOG_H

/**
 * struct dog - holds information about a dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog owner's name.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
