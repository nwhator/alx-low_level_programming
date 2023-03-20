#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Entry point
 * @name: name
 * @age: age
 * @owner: owner
 * Description: Define struct dog with the three members
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
