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

    private:
    // auto control = std::make_unique<SmartHomeController>();
};


    auto controller = std::make_unique<SmartHomeController>();
    auto room = std::make_unique<Room>("Kitchen", 5264524766987587);
    