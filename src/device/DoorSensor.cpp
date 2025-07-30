#include "../../include/device/DoorSensor.hpp"

DoorSensor::DoorSensor(
        const std::string& name, 
        const std::string& artNum, 
        const std::uint8_t id, 
        double powerUsage,
        bool isOn,
        bool isOpen)
        : Sensor(name, artNum, id, powerUsage, isOn),
        isOpen_(isOpen){}
    
    bool DoorSensor::isDoorOpen() const
    {
        return isOpen_;
    }

    

