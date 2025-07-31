


#include "Device.hpp"

#pragma once
class Lamp : public Device
{
    public:
    explicit Lamp(
        const std::string& name, 
        const std::string& artNum, 
        const std::uint32_t& id, 
        double powerUsage,
        bool isOn,
        bool isShining);

    void turnOn() override;
    void turnOff() override;
    double getPowerUsage() const override;
    std::string getDeviceName() const override;
    std::string getDeviceArtNum() const override;
    std::uint32_t getDeviceID() const override;
    bool isDeviceOn() const override;
    ~Lamp() override = default;


    protected:
    bool isShining_;
};