#include <string>
#include <cstdint>
#include <memory>

#include "../core/ISwitchable.hpp"


#pragma once
class Device : ISwitchable
{
    protected:
    Device(
        const std::string& name, 
        const std::string& artNum, 
        const std::uint32_t& id, 
        double powerUsage,
        bool isOn)
        : deviceName_(name),
        deviceArtNum_(artNum),
        deviceID_(id),
        powerUsage_(powerUsage),
        isOn_(isOn)
        {}

    std::uint32_t deviceID_;
    std::string deviceName_;
    std::string deviceArtNum_;
    double powerUsage_;
    bool isOn_;
   
    
    public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual double getPowerUsage() const {return powerUsage_; };
    virtual std::string getDeviceName() const { return deviceName_; };
    virtual std::string getDeviceArtNum() const { return deviceArtNum_; };
    virtual std::uint32_t getDeviceID() const { return deviceID_; };
    virtual bool isDeviceOn() const { return isOn_; };
    virtual ~Device() = default;

    void blink();
    // maybe extend as SmartDevice, ActorDevice, SensorDevice
   


};