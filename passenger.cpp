//
// Created by Teni on 12/4/2022.
//

#include "passenger.h"

//Default Constructor
Passenger(){
    dangerPoints = 0;
}

Passenger(std::string name){
    dangerPoints = 0;
    this->name = name;
}

void setPassengerName(std::string name) {
    this->name = name;
}

std::string getPassengerName(){
    return this->name;
}

int getDangerPoints(){
    return this->dangerPoints;
}
