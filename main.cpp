#include <iostream>
#include <memory>

#include "include/core/SmartHomeController.hpp"
#include "include/device/Lamp.hpp"
#include "include/device/SmartLamp.hpp"
#include "include/core/ISmartHomeInterface.hpp"
#include "include/core/SmartHomeSystem.hpp"


int main()
{


    std::unique_ptr<ISmartHomeInterface> controller = std::make_unique<SmartHomeSystem>();

    

    return 0;
}












