


#include "Device.hpp"

#pragma once
class Sensor : Device 
{
    public:
    Sensor(
        const std::string& name, 
        const std::string& artNum, 
        const std::uint32_t& id, 
        double powerUsage,
        bool isOn);

        
    ~Sensor() override = default;


};