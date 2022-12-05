//
// Created by Teni on 12/4/2022.
//

#include "Dog.h"

Dog::Dog() {
    this->dangerPoints = 0;
}

/*Dog(std::string name) : Passenger(name) {

}*/
Dog::Dog(std::string name) : Passenger(name) {
    this->dangerPoints = 0;
}



void Dog::setEndangered(bool endangered){
    this->isEndangered = endangered;
}

bool Dog::getIsEndangered(){
    return this->isEndangered;
}

int Dog::getDangerPoints() {
    return this->dangerPoints;
}

void Dog::setDangerPoints(){
    // Sets danger points based on passenger type
    this->dangerPoints = 30;
    if(this->isEndangered) {
        this->dangerPoints += 5;
    }
}
