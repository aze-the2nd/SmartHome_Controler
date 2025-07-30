#include <string>


#pragma once
class ISendNotification
{
    public:
    virtual std::string setNotifyID() = 0;
    virtual std::string sendMessage() = 0;
    virtual std::string setIPAdress() = 0;
    virtual ~ISendNotification() = default;
};