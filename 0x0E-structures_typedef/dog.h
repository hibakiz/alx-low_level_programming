#ifndef DOG_H
#define DOG_H
/**
 * struct dog - tsts
 * @name: int
 * @age: int
 * @owner: int
 *
 * Description: dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /*DOG_H*/
