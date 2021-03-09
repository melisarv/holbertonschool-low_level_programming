#ifndef GRANDPARENT_H
#define GRANDPARENT_H

/**
 * struct dog - data type dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner of the dog
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
