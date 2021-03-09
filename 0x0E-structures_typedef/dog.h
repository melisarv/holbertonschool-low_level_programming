#ifndef GRANDPARENT_H
#define GRANDPARENT_H

/**
 * struct dog - data type dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner of the dog
 *
 * Description: attributes of a dog
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

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
