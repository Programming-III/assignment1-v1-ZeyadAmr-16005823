#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;

//Animal
std::string Animal::getName() {
	return Animal::name;
}
int Animal::getAge() {
	return this->age;
}
bool Animal::getIsHungry() {
	return this->isHungry;
}

void Animal::display() {
	std::cout << this->name << " " << this->age << " " << this->isHungry;
}
void Animal::feed() {
	if (this->isHungry)
		std::cout << "HUNGRY";
	else
		std::cout << "NOT HUNGRY";
}
//Bird
Bird::Bird(float wingSpan) {
	this->wingSpan = wingSpan;
}

//Reptile
Reptile::Reptile(bool isVen) {
	this->isVenomous = isVen;
}

//Enclosure
void Enclosure::addAnimal(Animal* a) {
	this->animal_arr += sizeof(*a);
	*this->animal_arr = *a;
}
void Enclosure::displayAnimals() {
	for (int i = 0; i < this->currentCount; i++) {
		std::cout << (*this->animal_arr).getName() << " " << (*this->animal_arr).getAge()
			<< " " << (*this->animal_arr).getIsHungry()<<std::endl;
	}
}

Enclosure::Enclosure(int capacity) {
	this->capacity = capacity;
	this->currentCount = 0;
	this->animal_arr = (Animal*)malloc(sizeof(Animal)+this->capacity);
}
Enclosure::~Enclosure() {
	free(this->animal_arr);
}

//Visitor
void Visitor::displayInfo() {
	std::cout << this->visitorName << " " << this->ticketsBought;
}
Visitor::Visitor(std::string name, int tickets) {
	this->visitorName = name;
	this->ticketsBought = tickets;
}




int main() {

	Enclosure e{5};
	Mammal* m;
	Bird* b;
	Reptile* r;

	Visitor v{"Ahmed", 3};
	
	std::cout << "Enclosure 1 Animals:" << std::endl;
	e.displayAnimals();
	std::cout << "Visitors:" << std::endl;
	v.displayInfo();

	return 0;
}
