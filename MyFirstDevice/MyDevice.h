#pragma once
#include <fbsdk/fbsdk.h>



class MyDevice :public FBDevice
{
    FBDeviceDeclare(MyDevice,FBDevice)
public:
    void FBDestroy() override;
    bool FBCreate() override;
};
