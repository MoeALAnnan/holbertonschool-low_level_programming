#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Structure data type
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: pet identifier
 */
typedef struct dog
{
char *name;
float age;
char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
