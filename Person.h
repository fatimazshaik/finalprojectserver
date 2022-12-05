//
// Created by Teni on 12/4/2022.
//

#ifndef FINALPROJECTSERVER_MAIN_PERSON_H
#define FINALPROJECTSERVER_MAIN_PERSON_H

#include "Passenger.h"

class Person : public Passenger {
private:
    int dangerPoints;
public:
    int passAge;
    Person::Person(std::string name);
    Person::Person();
    void setPassengerAge(int age);
    int getPassengerAge();

    void setDangerPoints();
    int getDangerPoints();
};


#endif //FINALPROJECTSERVER_MAIN_PERSON_H
