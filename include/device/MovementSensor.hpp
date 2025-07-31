


#include "Sensor.hpp"

#pragma once
class MovementSensor : Sensor
{
    public:
    MovementSensor(
        const std::string& name, 
        const std::string& artNum, 
        const std::uint32_t& id, 
        double powerUsage,
        bool isOn,
        bool isMovement);

    bool getMovement();
    ~MovementSensor() override = default;


    protected:
    bool isMovement_;

};