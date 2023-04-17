#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog's basic info.
 * @name: 1st identity
 * @age: 2nd identity
 * @owner: 3rd identity
 *
 * Description: Long description.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef of a struct dog description.
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
