


#include "Lamp.hpp"

#pragma once
class SmartLamp : public Lamp
{
    public:
    SmartLamp(
        const std::string& name, 
        const std::string& artNum, 
        const std::uint32_t& id, 
        double powerUsage,
        bool isOn,
        bool isShining);

    void turnOn() final;
    void turnOff() final;
    double getPowerUsage() const final;
    std::string getDeviceName() const final;
    std::string getDeviceArtNum() const final;
    void blink();
    ~SmartLamp() final = default;


};