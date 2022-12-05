//
// Created by Teni on 12/4/2022.
//

#ifndef FINALPROJECTSERVER_MAIN_DOG_H
#define FINALPROJECTSERVER_MAIN_DOG_H

#include "Passenger.h"

class Dog : public Passenger {
private:
    int dangerPoints;
public:
    bool isEndangered;
    Dog::Dog(std::string name);
    //Dog::Dog(std::string name) : Passenger(name);
    Dog::Dog();
    void setEndangered(bool endangered);
    bool getIsEndangered();

    void setDangerPoints();
    int getDangerPoints();
};


#endif //FINALPROJECTSERVER_MAIN_DOG_H
