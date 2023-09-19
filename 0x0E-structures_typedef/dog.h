#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's info
 * @name:the first memmber
 * @age:the second member
 * @owner:the third member
 *
 * Description:lengthy desciption
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - structdogs typedef
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
