#ifndef _ELEVATOR_H_
#define _ELEVATOR_H_

#include "Utility.h"
#include "Person.h"
#include <string>

////////////////////////////////////////////////////////
//////// DO NOT MODIFY ANY 😤 CODE IN THIS FILE ////////
/////////// 😡 ANY CONSTANTS/ETC SHOULD 😡 /////////////
////////////// 😡 BE ADDED IN THE .CPP 😡 //////////////
////////////////////////////////////////////////////////

class Elevator {
private:
    bool servicing;
    int currentFloor;
    int targetFloor;

public:
    /**
     * Requires: currentTime is valid
     * Modifies: servicing
     * Effects: Changes the value of the current floor if the currentTime is 
     *          divisible by TICKS_PER_ELEVATOR_MOVE
     *          If current floor is the target floor, servicing is set to false
     */
    void tick(int currentTime);
    
    /**
     * Requires: 0 <= floorNum <= MAXFLOORNUM
     * Modifies: targetFloor, servicing
     * Effects: Sets the targetFloor and marks the Elevator as currently servicing
     */
    void serviceRequest(int floorNum);

    /**
     * Requires: nothing
     * Modifies: outs
     * Effects: Prints the fenstring of the elevator
     */
    void print(ostream &outs);

    /**
     * Requires: nothing
     * Modifies: this Elevator object
     * Effects: creates an Elevator object
     *          with initial values
     */
    Elevator();

    /**
     * Requires: 0 <= floorNum <= MAXFLOORNUM
     * Modifies: currentFloor
     * Effects: sets the currentFloor
     */
    void setCurrentFloor(int currentFloorIn);

    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns whether the elevator is servicing
     *
     */
	bool isServicing() const;

    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns the currentFloor value
     *          of the Elevator object
     */
    int getCurrentFloor() const;

    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns the targetFloor
     */
    int getTargetFloor() const;
};

#endif
