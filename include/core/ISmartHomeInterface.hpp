#include <memory>
#include <string>

class ISmartHomeInterface
{
    public:
    virtual bool initialize() = 0;
    virtual bool run() = 0;


    virtual ~ISmartHomeInterface() = default;


};


