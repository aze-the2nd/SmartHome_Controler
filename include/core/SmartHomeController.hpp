#include <string>
#include <memory>
#include <vector>

#include "Room.hpp"
#include "ISendNotification.hpp"



#pragma once
class SmartHomeController// : ISendNotification
{

    public:
    SmartHomeController() = default; //SmartHomeController(const std::string& roomName, const std::uint8_t& rommID);

    bool addRoom(std::unique_ptr<Room>&);
    bool removeRoom(std::unique_ptr<Room>&);
    void activateAll();
    void deactivatAll();
    std::uint8_t getRoomID(std::unique_ptr<Room>&) const;
    std::string getRoomName(std::unique_ptr<Room>&) const;
    double getHouseholdPower();

    ~SmartHomeController() = default;
    
    
    private:
    std::vector<std::unique_ptr<Room>> rooms_;
};