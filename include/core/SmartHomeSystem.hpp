#include <iostream>
#include <memory>

#include "../core/SmartHomeController.hpp"
#include "../device/Lamp.hpp"
#include "../device/SmartLamp.hpp"
#include "../core/ISmartHomeInterface.hpp"

class SmartHomeSystem : public ISmartHomeInterface
{
    public:
    SmartHomeSystem() = default;

    bool initialize() override;
    bool run() override;

    ~SmartHomeSystem()  = default;
};