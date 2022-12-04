#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <cstdlib>

// for Json::value
#include <json/json.h>
#include <json/reader.h>
#include <json/writer.h>
#include <json/value.h>

class Auto_V {
private:
    std::string name;
    //is creature, girl, boy, adult, elderly, ect.
    bool inAccident;
public:
    Auto_V(std::string);
    Auto_V();
    std::string getName(void);
    bool setAccidentStatus(bool);
    virtual Json::Value dump2JSON();
    virtual bool JSON2Object(Json::Value arg_jv);
};