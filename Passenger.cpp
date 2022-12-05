//
// Created by Teni on 12/4/2022.
//

#include "Passenger.h"

//Default Constructor

Passenger::Passenger(std::string name){
    this->dangerPoints = 0;
    this->name = name;
}

Passenger::Passenger(){
    this->dangerPoints = 0;
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
