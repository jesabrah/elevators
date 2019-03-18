#ifndef _SPAWN_H_
#define _SPAWN_H_

#include <string>

////////////////////////////////////////////////////////
//////// DO NOT MODIFY ANY 😤 CODE IN THIS FILE ////////
/////////// 😡 ANY CONSTANTS/ETC SHOULD 😡 /////////////
////////////// 😡 BE ADDED IN THE .CPP 😡 //////////////
////////////////////////////////////////////////////////

class Spawn{
private:
    int turn;
    int startingFloor;
    int targetFloor;
    int angerLevel;

public:
    /*
     * Requires: nothing
     * Modifies: turn, startingFloor, targetFloor, angerLevel
     * Effects:  Parses the eventString to set member variables
     */
    Spawn(std::string eventString);

    /*
     * Requires: nothing
     * Modifies: nothing
     * Effects:  Returns turn
     */
    int getTurn() const;

    /*
     * Requires: nothing
     * Modifies: nothing
     * Effects:  Returns startingFloor
     */
    int getStartingFloor() const;

    /*
     * Requires: nothing
     * Modifies: nothing
     * Effects:  Returns targetFloor
     */
    int getTargetFloor() const;

    /*
     * Requires: nothing
     * Modifies: nothing
     * Effects:  Returns angerLevel
     */
    int getAngerLevel() const;
};


#endif
