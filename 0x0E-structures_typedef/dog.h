#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a structure dog definition
 * @name: string
 * @owner: string
 * @age: a float
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - new name for the type struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
