


#include "Sensor.hpp"

#pragma once
class DoorSensor : Sensor
{
    public:
    explicit DoorSensor(
        const std::string& name, 
        const std::string& artNum, 
        const std::uint32_t& id, 
        double powerUsage,
        bool isOn,
        bool isOpen);

    
    bool isDoorOpen() const;
    ~DoorSensor() override = default;

    protected:
    bool isOpen_;
};