


#include "Lamp.hpp"
#include "MovementSensor.hpp"

#pragma once
class EntranceLamp : public Lamp, public MovementSensor
{
    public:
    EntranceLamp(
        const std::string& name, 
        const std::string& artNum, 
        const std::uint32_t& id, 
        double powerUsage,
        bool isOn,
        bool isShining,
        bool isMovement);

    void doShineIfMovement();
    ~EntranceLamp() final = default;

};