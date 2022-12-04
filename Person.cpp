//
// Created by Teni on 12/4/2022.
//

#include "Person.h"

Person() : Passenger() {
}

Person(std::string name) : Passenger(std::string name) {
}

void setPassengerAge(int age){
    this->passengerAge = age;
}
int getPassengerAge(){
    this->passengerAge;
}

void setDangerPoints(){
    // Sets danger points based on passenger type
    this->dangerPoints = 50;
    if (this->passAge <= 5 || this->passAge >= 74){
        this->dangerPoints = this->dangerPoints + 20;
    }
}