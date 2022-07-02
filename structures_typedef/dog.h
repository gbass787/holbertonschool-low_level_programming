#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Description: dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
