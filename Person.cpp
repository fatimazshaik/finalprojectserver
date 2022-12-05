//
// Created by Teni on 12/4/2022.
//

#include "Person.h"

Person::Person() {
    this->dangerPoints = 0;
}

/*Person(std::string name) : Passenger(std::string name) {
}*/
Person::Person(std::string name) : Passenger(name) {
    this->dangerPoints = 0;
}

void Person::setPassengerAge(int age){
    this->passAge = age;
}
int Person::getPassengerAge(){
    return this->passAge;
}
int Person::getDangerPoints() {
    return this->dangerPoints;
}

void Person::setDangerPoints(){
    // Sets danger points based on passenger type
    this->dangerPoints = 50;
    if (this->passAge <= 5 || this->passAge >= 74){
        this->dangerPoints = this->dangerPoints + 20;
    }
}
