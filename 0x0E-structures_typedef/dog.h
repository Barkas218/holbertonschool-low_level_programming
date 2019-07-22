#ifndef DOG_H
#define DOG_H
/**
 * struct dog - info about cute doggies
 * @name: of doggies
 * @age: of doggies
 * @owner: of doggies
 *
 * Description: saves info about dogs
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
int _putchar(char c);
#endif