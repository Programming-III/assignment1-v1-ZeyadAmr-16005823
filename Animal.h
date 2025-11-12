#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

#include <string>
#include <iostream>

class Animal{
private:
	std::string name;
	int age;
	bool isHungry;

public:
	void display();	
	void feed();

	//Setter and getter
	std::string getName();
	int getAge();
	bool getIsHungry();

};



#endif
