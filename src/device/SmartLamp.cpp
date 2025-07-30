#include <iostream>
#include <chrono>
#include <thread>

#include "../../include/device/SmartLamp.hpp"

SmartLamp::SmartLamp(
        const std::string& name, 
        const std::string& artNum, 
        const std::uint8_t id, 
        double powerUsage,
        bool isOn,
        bool isShining)
        : Lamp(name, artNum, id, powerUsage, isOn, isShining){}

    void SmartLamp::blink()
    {
        std::cout << "SmartLamp \"" << getDeviceName() << "\" blinkt..." << std::endl;

        turnOn();
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
        turnOff();
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
        turnOn();
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
        turnOff();
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
        turnOn();
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
        turnOff();
    }