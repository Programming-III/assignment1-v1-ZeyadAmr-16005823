#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

class Visitor{

private:
	std::string visitorName;
	int ticketsBought;

public:
	void displayInfo();
	Visitor(std::string name, int tickets);

};


#endif
