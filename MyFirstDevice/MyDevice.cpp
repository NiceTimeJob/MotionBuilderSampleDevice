#include "MyDevice.h"

FBDeviceImplementation(MyDevice);
FBRegisterDevice("MyDevice",
    MyDevice,
    "MyDevice",
    "MY FIRST DEVICE",
    FB_DEFAULT_SDK_ICON)


void MyDevice::FBDestroy()
{
    FBDevice::FBDestroy();
}

bool MyDevice::FBCreate()
{
    return FBDevice::FBCreate();
}
