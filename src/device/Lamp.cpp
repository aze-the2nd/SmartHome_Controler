#include <iostream>
#include <string>
#include <cstdint>

#include "../../include/device/Lamp.hpp"

Lamp::Lamp(
    const std::string& name,
    const std::string& artNum, 
    const std::uint8_t id, 
    double powerUsage,
    bool isOn,
    bool isShining)
    : Device( name, artNum, id, powerUsage, isOn),
    isShining_(isShining){}

void Lamp::turnOn()
{
    isOn_ = true;
    //std::cout <<  deviceName_ << " " << deviceID_ << " switched on.\n";
}

void Lamp::turnOff()
{
    isOn_ = false;
    //std::cout << deviceName_ << " " << deviceID_ << " switched off.\n";
}


