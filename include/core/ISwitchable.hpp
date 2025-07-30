



#pragma once
class ISwitchable
{
    public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual ~ISwitchable() = default;
};