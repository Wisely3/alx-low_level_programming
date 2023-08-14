#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines the dog's information
 * @name: first descriptive element
 * @age : second descriptive element
 * @owner: third descriptive element
 *
 * Description: full description of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - the typendef of the struct dog
 */
typedef struct dog dog_t;

char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
