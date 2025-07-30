#include "../../include/device/Sensor.hpp"

Sensor::Sensor(
        const std::string& name, 
        const std::string& artNum, 
        const std::uint8_t id, 
        double powerUsage,
        bool isOn)
        : Device(name, artNum, id, powerUsage, isOn){}
    

