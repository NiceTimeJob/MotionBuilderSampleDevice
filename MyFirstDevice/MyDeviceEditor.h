#pragma once
#include "MyDevice.h"

class MyDeviceEditor:public  FBDeviceLayout
{
    FBDeviceLayoutDeclare(MyDeviceEditor,FBDeviceLayout)
public:
    void FBDestroy() override;
    bool FBCreate() override;
    void CreatUI();
    void OnButtonClick(HISender sender, HKEvent event);


private:
    MyDevice* _device =nullptr;
    FBEditColor _color;
    FBButton _button;
    



    
    
};
