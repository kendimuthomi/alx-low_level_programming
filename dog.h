#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure of dog
 * @name: string
 * @owner: string
 * @age: int
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
}
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
