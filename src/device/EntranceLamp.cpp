
#include "../../include/device/EntranceLamp.hpp"

    EntranceLamp::EntranceLamp(
        const std::string& name, 
        const std::string& artNum, 
        const std::uint8_t id, 
        double powerUsage,
        bool isOn,
        bool isShining,
        bool isMovement)
        : Lamp(name, artNum, id, powerUsage, isOn, isShining),
        MovementSensor(name, artNum, id, powerUsage, isOn, isMovement){}

        void EntranceLamp::doShineIfMovement()
        {
           isMovement_ ? isShining_ = true : isShining_ = false;
        }