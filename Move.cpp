#include <cmath>
#include "Move.h"
using namespace std;

Move::Move(string commandString) {
if(commandString==""){
	isPass=true;
	isPickup=false;
}
else if(commandString.size==4){
	elevatorId=commandString[1];
	targetFloor=commandString[3];
	isPickup=false;
	isPass=false;
}
	
else if(commandString.size==3){
	elevatorId=commandString[1];
	if(commandString[2]=='p'){
		isPickup=true;
		isPass=false;
	}
}
    
}

bool Move::isValidMove(Elevator elevators[NUM_ELEVATORS]) const {

	//TODO: Implement isValidMove
	//Returning false to prevent compilation error
	return false;
}

void Move::setPeopleToPickup(const string& pickupList, const int& currentFloor, const Floor& pickupFloor) {
	
	//TODO: Implement setPeopleToPickup	

}

///////////////////////////////////////////////////////
///// DO NOT MODIFY ANY 😤 CODE BENEATH THIS LINE /////
///////////////////////////////////////////////////////

Move::Move() {
    elevatorId = -1;
    targetFloor = -1;
    numPeopleToPickup = 0;
    totalSatisfaction = 0;
	isPass = false;
    isPickup = false;
}

bool Move::isPickupMove() const {
    return isPickup;
}

bool Move::isPassMove() const {
	return isPass;
}

bool Move::isSaveMove() const {
	return isSave;
}

bool Move::isQuitMove() const {
	return isQuit;
}

int Move::getElevatorId() const {
    return elevatorId;
}

int Move::getTargetFloor() const {
    return targetFloor;
}

int Move::getNumPeopleToPickup() const {
    return numPeopleToPickup;
}

int Move::getTotalSatisfaction() const {
    return totalSatisfaction;
}

void Move::setTargetFloor(int inTargetFloor) {
    targetFloor = inTargetFloor;
}

void Move::copyListOfPeopleToPickup(int newList[MAX_PEOPLE_PER_FLOOR]) const {
    for (int i = 0; i < numPeopleToPickup; ++i) {
        newList[i] = peopleToPickup[i];
    }
}
