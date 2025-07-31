#include <string>
#include <vector>
#include <memory>

#include "../device/Device.hpp"



#pragma once
class Room 
{
    public: 
    
    explicit Room(
        const std::string& roomName, 
        const std::uint8_t& roomID);

    bool addDevice(std::unique_ptr<Device>&);
    bool removeDevice(std::unique_ptr<Device>&);
    void activateAllDevices();
    void deactivateAllDevices();
    std::uint8_t getDeviceID(const std::unique_ptr<Device>&) const;
    std::string getDeviceName(const std::unique_ptr<Device>&) const;
    std::string getDeviceArtNum(const std::unique_ptr<Device>&) const;
    double getDevicePowerUsage(const std::unique_ptr<Device>&) const;
    double getRoomPowerUsage() const;
    std::string getRoomName() const;
    std::uint8_t getRoomID() const;




    

    private:
    std::string roomName_;
    std::uint8_t roomID_;
    std::vector< std::unique_ptr<Device>> devices_;

    ~Room() = default;
};