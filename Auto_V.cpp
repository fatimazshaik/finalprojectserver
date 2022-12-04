#include "Auto_V.h"
//Auto_V Constructors:

Auto_V::Auto_V(std::string arg_name) {
    this->name = arg_name;
    this->inAccident = false;
}
Auto_V::Auto_V() {
    this->name = "";
    this->inAccident = false;
}

std::string Auto_V::getName(){
    return this->name;
}

bool Auto_V::setAccidentStatus(bool accident_state) {
    this->inAccident = accident_state;
}

Json::Value Auto_V::dump2JSON(void) {
    Json::Value result;
    if (name != "")
    {
    result["name"] = this->name;
    }
    result["in accident"] = this->inAccident;
}
bool Auto_V::JSON2Object (Json::Value arg_jv) {
    if ((arg_jv.isNull() == true) ||
    (arg_jv.isObject() != true)) {
        return false;
    }
    if (((arg_jv["name"]).isNull() == true) ||
      ((arg_jv["name"]).isString() != true))
    {
      return false;
    }
    this->name = (arg_jv["name"]).asString();
    if (((arg_jv["in accident"]).isNull() == true) ||
    ((arg_jv["in accident"]).isBool() != true)) {
        return false;
    }
    this->inAccident = (arg_jv["in accident"]).asBool();
    return true;
}