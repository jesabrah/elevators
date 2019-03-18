#ifndef _PERSON_H_
#define _PERSON_H_

#include "Utility.h"

////////////////////////////////////////////////////////
//////// DO NOT MODIFY ANY 😤 CODE IN THIS FILE ////////
/////////// 😡 ANY CONSTANTS/ETC SHOULD 😡 /////////////
////////////// 😡 BE ADDED IN THE .CPP 😡 //////////////
////////////////////////////////////////////////////////

class Person {
private:
    int currentFloor;
    int targetFloor;
    int angerLevel;

public:
    /**
     * Requires: nothing
     * Modifies: angerLevel
     * Effects: every TICKS_PER_ANGER_INCREASE, this function increases the
     *          person's anger level by 1. If, after increasing, the person 
     *          already has an anger level of MAX_ANGER, the function will 
     *          return true. If the person has an anger level less than 
     *          MAX_ANGER, the function will return false
     */
    bool tick(int currentTime);

    /**
     * Requires: nothing
     * Modifies: outs
     * Effects: Prints the fenstring of the person NOT including the turn
     */
    void print(ostream &outs);

    /**
     * Requires: nothing
     * Modifies: currentFloor, targetFloor, angerLevel
     * Effects: sets currentFloor, targetFloor, and angerLevel to 0
     */
    Person();

    /**
     * Requires: currentFloorIn, targetFloorIn, angerLevelIn are valid
     * Modifies: currentFloor, targetFloor, angerLevel
     * Effects: sets currentFloor to be currentFloorIn
     *          sets targetFloor to be targetFloorIn
     *          sets angerLevel to be angerLevelIn
     */
    Person(int currentFloorIn, int targetFloorIn, int angerLevelIn);

    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: Returns the current floor of the person.
     */
    int getCurrentFloor() const;

    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: Returns the target floor of the person.
     */
    int getTargetFloor() const;
    
    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: Returns the anger level of the person.
     */
    int getAngerLevel() const;
};

#endif
