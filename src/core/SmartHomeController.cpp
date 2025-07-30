#include <string>
#include <vector>
#include <memory>
#include <algorithm>


#include "../../include/core/SmartHomeController.hpp"

bool SmartHomeController::addRoom(std::unique_ptr<Room> room)
{
    rooms_.push_back(std::move(room));
    return true;
}

bool SmartHomeController::removeRoom(std::unique_ptr<Room> room)
{
    auto it = remove_if(rooms_.begin(), rooms_.end(),
        [&](const std::unique_ptr<Room>& d)
        {
            return d->getRoomName() == room->getRoomName();
        });

    if (it != rooms_.end())
    {
        rooms_.erase(it, rooms_.end());
        return true;
    }

    return false;
}