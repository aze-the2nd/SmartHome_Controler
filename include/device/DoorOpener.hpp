


#include "DoorSensor.hpp"

#pragma once
class DoorOpener : DoorSensor
{
    public:
    explicit DoorOpener(
        const std::string& name, 
        const std::string& artNum, 
        const std::uint32_t& id, 
        double powerUsage,
        bool isOn,
        bool isOpen);

    void doOpen();
    void doClose();
    ~DoorOpener() final = default;

};