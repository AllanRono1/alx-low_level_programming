#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner
 * Description: struct for dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_ t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
