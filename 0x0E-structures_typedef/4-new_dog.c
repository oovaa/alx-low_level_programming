#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
char *newname, *newowner;

dog_t *new_dog;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

newname = malloc(sizeof(name) + 1);
if (newname == NULL)
{
free(new_dog);
return (NULL);
}

newowner = malloc(sizeof(owner) + 1);
if (newowner == NULL)
{
free(newname);
free(new_dog);
return (NULL);
}


strcpy(newname, name);
strcpy(newowner, owner);

new_dog->name = newname;
new_dog->owner = newowner;
new_dog->age = age;

return (new_dog);
}

