//
// Created by Teni on 12/4/2022.
//

#ifndef FINALPROJECTSERVER_MAIN_DOG_H
#define FINALPROJECTSERVER_MAIN_DOG_H

#include "Passenger.h"

class Dog : public Passenger {
public:
    bool isEndangered;

    void setEndangered(bool endangered);
    bool getIsEndangered();

    void setDangerPoints();
};


#endif //FINALPROJECTSERVER_MAIN_DOG_H
