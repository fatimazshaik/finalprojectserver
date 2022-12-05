//
// Created by Teni on 12/4/2022.
//

#ifndef FINALPROJECTSERVER_MAIN_PASSENGER_H
#define FINALPROJECTSERVER_MAIN_PASSENGER_H

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string>
#include <cstring>
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <cstdlib>
#include <sstream>
#include <json/json.h>
#include <json/reader.h>
#include <json/writer.h>
#include <json/value.h>


class Passenger {
private: 
    std::string name;
    int dangerPoints;
public:
    Passenger();
    Passenger(std::string);
    void setPassengerName(std::string);
    std::string getPassengerName();

    int getDangerPoints();

    //Danger points depend on the type of passenger in the ride.
    virtual void setDangerPoints();

};
#endif //FINALPROJECTSERVER_MAIN_PASSENGER_H
