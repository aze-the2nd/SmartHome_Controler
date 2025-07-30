#include <chrono>
#include <thread>

#include "../../include/device/DoorOpener.hpp"

DoorOpener::DoorOpener(
    const std::string& name,
    const std::string& artNum,
    const std::uint8_t id,
    double powerUsage,
    bool isOn,
    bool isOpen)
    : DoorSensor(name, artNum, id, powerUsage, isOn, isOpen){}

void DoorOpener::doOpen()
{
    std::this_thread::sleep_for(std::chrono::seconds(5));
    isOpen_ == true;

}

void DoorOpener::doClose()
{
    std::this_thread::sleep_for(std::chrono::seconds(5));
    isOpen_ == false;

}