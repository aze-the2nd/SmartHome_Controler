#include <string>
#include <vector>
#include <memory>
#include <algorithm>
#include <stdexcept>

//#include "../../include/device/Device.hpp"
#include "../../include/core/Room.hpp"

Room::Room(
    const std::string& roomName,
    const std::uint8_t& roomID)
    : roomName_(roomName),
    roomID_(roomID) {}

    bool Room::addDevice(std::unique_ptr<Device> device)
    {
        devices_.push_back(std::move(device));
        return true;
    }

    bool Room::removeDevice(std::unique_ptr<Device> device)
    {
        auto it = std::remove_if(
            devices_.begin(), 
            devices_.end(), 
            [&](const std::unique_ptr<Device>& d) // -> Lambda-function
            { 
                return d->getDeviceName() == device->getDeviceName();
            });

        if (it != devices_.end())
        {
            devices_.erase(it, devices_.end());
            return true;
        }
        
        return false;
    }

    void Room::activateAllDevices()
    {
        for (auto& device : devices_)
        {
            device->turnOn();            
        }
    }

    void Room::deactivateAllDevices()
    {
        for (auto& device : devices_)
        {
            device->turnOff();
        }
    }

    std::uint8_t Room::getDeviceID(const std::unique_ptr<Device>& device) const
    {
        if (!device) 
        {
            throw std::invalid_argument("Null pointer passed to getDeviceID");
        }
        
        return device->getDeviceID();
    }
    
    std::string Room::getDeviceName(const std::unique_ptr<Device>& device) const
    {
        if (!device) 
        {
            throw std::invalid_argument("Null pointer passed to getDeviceName");
        }
        
        return device->getDeviceName();
    }
    
    std::string Room::getDeviceArtNum(const std::unique_ptr<Device>& device) const
    {
        if (!device) 
        {
            throw std::invalid_argument("Null pointer passed to getDeviceArtNum");
        }
        
        return device->getDeviceArtNum();
    }

    double Room::getDevicePowerUsage(const std::unique_ptr<Device>& device) const
    {
        return device->getPowerUsage();
    }

    double Room::getRoomPowerUsage() const
    {
        double roomPower;

        for (auto& device : devices_)
        {
            roomPower += device->getPowerUsage();
        }

        return roomPower;
    }

    std::string Room::getRoomName() const { return roomName_;}
