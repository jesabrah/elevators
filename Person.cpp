#include "Person.h"
using namespace std;

bool Person::tick(int currentTime) {

	//TODO: Implement tick
	//Returning false to prevent compilation error
	return false;
}

void Person::print(ostream &outs) {
    
    // TODO: implement print
}

///////////////////////////////////////////////////////
///// DO NOT MODIFY ANY 😤 CODE BENEATH THIS LINE /////
///////////////////////////////////////////////////////

Person::Person() {

    angerLevel = 0;
    targetFloor = 0;
}

Person::Person(int currentFloorIn, int targetFloorIn, int angerLevelIn) {

    currentFloor = currentFloorIn;
    targetFloor = targetFloorIn;
    angerLevel = angerLevelIn;
}

int Person::getCurrentFloor() const {
    
    return currentFloor;
}

int Person::getTargetFloor() const {
    
    return targetFloor;
}

int Person::getAngerLevel() const {
    
    return angerLevel;
}
