#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

class Enclosure {

private:
	Animal* animal_arr;
	int capacity;
	int currentCount;

public:
	void addAnimal(Animal* a);
	void displayAnimals();

	Enclosure(int capacity);
	~Enclosure();
};




#endif
