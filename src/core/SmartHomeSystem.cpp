#include <iostream>
#include <memory>
#include <string>

#include "../../include/core/SmartHomeController.hpp"
#include "../../include/device/Lamp.hpp"
#include "../../include/device/SmartLamp.hpp"
#include "../../include/core/ISmartHomeInterface.hpp"
#include "../../include/core/SmartHomeSystem.hpp"


bool SmartHomeSystem::initialize()
{
    bool success = false;


   // pseudo data-import
    
    controller->addRoom(room);
   // 

    return success;
}

bool SmartHomeSystem::run()
{
    bool success = false;


    return success;
}
