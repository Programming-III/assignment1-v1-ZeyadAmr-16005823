#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

class Reptile : public Animal {

private:
	bool isVenomous;

public:
	Reptile(bool isVen);

};



#endif
