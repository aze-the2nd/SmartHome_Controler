#include <memory>
#include <string>
#include <vector>

#include "../device/Device.hpp"
#include "Room.hpp"

class ISmartHomeInterface
{
    public:
    virtual bool initialize() = 0;
    virtual bool run() = 0;

    virtual std::shared_ptr<std::vector<std::string, std::uint32_t>> getRoomIndexList(const std::uint32_t&) const = 0;
    virtual std::shared_ptr<std::vector<std::string, std::uint32_t>> getDeviceIndexListOfRoom(const std::uint32_t&) const = 0;
    virtual std::shared_ptr<std::vector<std::string, std::uint32_t>> getIndexVector(const std::uint32_t&) const = 0;
    virtual void addDeviceInRoom(const std::string&) = 0;
    virtual void addRoom(const std::string&) = 0;
    virtual std::unique_ptr<Device> getDeviceAccess(const std::uint32_t roomID, const std::uint32_t deviceID) = 0;
    virtual std::unique_ptr<Room> getRoomAccess(const std::uint32_t) = 0;

    virtual ~ISmartHomeInterface() = default;


};


