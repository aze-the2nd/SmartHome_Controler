


#include "../../include/device/MovementSensor.hpp"

MovementSensor::MovementSensor(
    const std::string& name,
    const std::string& artNum,
    const std::uint8_t id,
    double powerUsage,
    bool isOn,
    bool isMovement)
    : Sensor(name, artNum, id, powerUsage, isOn),
    isMovement_(isMovement){}


    bool MovementSensor::getMovement()
    {
        return isMovement_;
    }