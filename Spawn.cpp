#include "Spawn.h"
using namespace std;

Spawn::Spawn(string fenstring){

	//TODO: Implement Spawn non-default constructor
    
}

///////////////////////////////////////////////////////
///// DO NOT MODIFY ANY 😤 CODE BENEATH THIS LINE /////
///////////////////////////////////////////////////////

int Spawn::getTurn() const {
    return turn;
}

int Spawn::getAngerLevel() const {
    return angerLevel;
}

int Spawn::getStartingFloor() const {
    return startingFloor;
}

int Spawn::getTargetFloor() const {
    return targetFloor;
}
