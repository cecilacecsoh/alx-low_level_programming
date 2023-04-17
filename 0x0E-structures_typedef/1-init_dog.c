#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* init_dog - initializes  struct dog variable
*
*@d: pointer to dog id
*@name: name of dog
*@age: age of dog
*@owner: owner's name
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
