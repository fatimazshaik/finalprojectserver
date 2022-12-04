//
// Created by Teni on 12/4/2022.
//

#include "Dog.h"

Dog() : Passenger() {
}

Dog(std::string name) : Passenger(std::string name) {

}


void setEndangered(bool endangered){
    this->isEndangered = endangered;
}

bool getIsEndangered(){
    return this->isEndangered;
}

void setDangerPoints(){
    // Sets danger points based on passenger type
    this->dangerPoints = 30;
    if(this->isEndangered) {
        this->dangerPoints += 5;
    }
}